.data
    result:         .word 0    # Variável para armazenar o resultado
    x:              .word 7    # Valor de x
    y:              .word -2   # Valor de y

.text
.globl main
main:
    lw $t0, x               # Carrega o valor de x em $t0
    lw $t1, y               # Carrega o valor de y em $t1

    li $t2, 0               # Inicializa o contador em 0
    li $t3, 0               # Inicializa o acumulador em 0

check_sign:
    bltz $t0, x_negative    # Verifica se x é negativo
    bltz $t1, y_negative    # Verifica se y é negativo

multiply_loop:
    beqz $t1, end_multiply  # Se y == 0, encerra o loop

    add $t3, $t3, $t0       # Acumula x em $t3

    addi $t1, $t1, -1       # Decrementa y

    j multiply_loop

x_negative:
    neg $t0, $t0            # Inverte o sinal de x
    j check_sign

y_negative:
    neg $t1, $t1            # Inverte o sinal de y
    j check_sign

end_multiply:
    lw $t4, x               # Carrega o valor de x novamente em $t4

    bltz $t4, result_negative    # Verifica se x é negativo
    j check_y_sign

result_negative:
    neg $t3, $t3            # Inverte o sinal do resultado

check_y_sign:
    lw $t4, y               # Carrega o valor de y novamente em $t4

    bltz $t4, print_negative    # Verifica se y é negativo
    j print_result

print_negative:
    neg $t3, $t3            # Inverte o sinal do resultado novamente para imprimir corretamente

print_result:
    # Armazena o resultado na variável result
    sw $t3, result

    # Imprime o resultado
    li $v0, 1               # Código do serviço de impressão inteiro
    lw $a0, result          # Carrega o valor de result em $a0
    syscall

    # Finaliza o programa
    li $v0, 10
    syscall

