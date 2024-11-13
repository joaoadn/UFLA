.data
x: .word 7
y: .word -2
quotient: .word 0
remainder: .word 0
newline: .asciiz "\n"

.text
.globl main

main:
    # Carregar o valor de x
    lw $t0, x
    # Carregar o valor de y
    lw $t1, y

    # Cálculo do sinal
    blt $t0, $zero, negate_dividend
    move $t4, $zero
    j check_divisor

negate_dividend:
    neg $t0, $t0
    li $t4, 1

check_divisor:
    blt $t1, $zero, negate_divisor
    j initialize

negate_divisor:
    neg $t1, $t1
    li $t4, 1

initialize:
    # Inicializar quotient e remainder
    move $t2, $zero   # quotient
    move $t3, $t0     # remainder

    # Cálculo da divisão utilizando subtração
    loop:
        blt $t3, $t1, finish
        sub $t3, $t3, $t1
        addi $t2, $t2, 1
        j loop

    # Aplicação do sinal ao quociente
    beqz $t4, skip_negate_quotient
    bnez $t2, negate_quotient

skip_negate_quotient:
    # Aplicação do sinal ao resto
    beqz $t4, print_result
    bnez $t3, negate_remainder

print_result:
    # Aplicação do sinal ao quociente
    beqz $t4, print_remainder
    neg $t2, $t2

print_remainder:
    # Aplicação do sinal ao resto
    beqz $t4, terminate
    neg $t3, $t3

terminate:
    # Imprimir o quociente
    move $a0, $t2
    li $v0, 1
    syscall

    # Imprimir espaço
    li $a0, ' '
    li $v0, 11
    syscall

    # Imprimir o resto
    move $a0, $t3
    li $v0, 1
    syscall

    # Imprimir nova linha
    la $a0, newline
    li $v0, 4
    syscall

    # Terminar o programa
    li $v0, 10
    syscall

negate_quotient:
    neg $t2, $t2
    j skip_negate_quotient

negate_remainder:
    neg $t3, $t3
    j print_result

finish:
    j print_result










   







    







