import java.util.Scanner;

public class ExercicioDois {
    public static void main (String[] args) {
        Scanner entrada = new Scanner(System.in);
        double valor; // valor a ser calculada a raiz;
        double epsilon = 0.0001; // precisão desejada para o método de Newton-Raphson
        double raiz; // raiz quadrada do valor;

        // Solicitar ao usuário um valor inteiro positivo
        do {
            System.out.print("Digite um valor inteiro positivo: ");
            valor = entrada.nextInt();
        } while (valor < 0);

        double x = valor; // chute inicial para o método de Newton-Raphson
        
        // Método de Newton-Raphson para raiz quadrada
        if (valor == 0) {
            raiz = 0;
        } else {
            while (Math.abs(x * x - valor) > epsilon) {
                x = 0.5 * (x + valor / x);
            }
            raiz = x;
        }

        // Exibir o resultado
        System.out.printf("A raiz quadrada de %.1f é %.2f%n", valor, raiz);

        entrada.close();
    }
}