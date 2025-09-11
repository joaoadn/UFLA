import java.util.Scanner;

public class ExercicioUm {

    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);

        int codigo; // codigo do produto
        int quantidade; // quantidade a ser comprada
        float valorbruto = 0; // preço bruto
        float desconto = 0; // valor do desconto
        float valorfinal; // valor final com desconto
        float precounitario = 0; // preço unitário do produto

    System.out.println ("Digite o codigo do produto: ");
    codigo = entrada.nextInt(); // le o codigo fornecido

    System.out.println ("Digite a quantidade a ser comprada: ");
    quantidade = entrada.nextInt(); // le a quantidade a ser comprada


    if (codigo >= 1 && codigo <= 10) {
    precounitario = 10;
    valorbruto = precounitario * quantidade;
    } 
    else if (codigo <= 15) {
    precounitario = 15;
    valorbruto = precounitario * quantidade;
    } 
    else if (codigo <= 20) {
    precounitario = 20;
    valorbruto = precounitario * quantidade;
    } 
    else if (codigo <= 30) {
    precounitario = 30;
    valorbruto = precounitario * quantidade;
    } 
    else if (codigo <= 40) {
    precounitario = 40;
    valorbruto = precounitario * quantidade;
    }

    if (valorbruto < 250) {
        desconto = 0.05f * valorbruto;
    }
    else if (valorbruto == 250 && valorbruto < 500) {
        desconto = 0.10f * valorbruto;
    }

    else if (valorbruto >= 500) {
        desconto = 0.15f * valorbruto;
    }

    valorfinal = valorbruto - desconto;

    System.out.println("Preco unitario" + precounitario);
    System.out.println("Valor bruto: " + valorbruto);
    System.out.println("Valor do desconto: " + desconto);
    System.out.println("Preco final: " + valorfinal);

    entrada.close();







        
        








    }

}
