import java.util.Scanner;

public class ExercicioTres {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);

        String frase; 
        String[] palavras; 
        char[] vogais = {'a', 'e', 'i', 'o', 'u'};

        System.out.print("Digite uma frase: ");
        frase = entrada.nextLine().toLowerCase();

        palavras = frase.split(" "); 

        String palavraMaisVogais = "";
        int maxVogais = 0;

        for (int i = 0; i < palavras.length; i++) {
            int contVogais = 0;
            for (int j = 0; j < palavras[i].length(); j++) {
                char letra = palavras[i].charAt(j);
                for (int k = 0; k < vogais.length; k++) {
                    if (letra == vogais[k]) {
                        contVogais++;
                        break;
                    }
                }
            }
            if (contVogais > maxVogais) {
                maxVogais = contVogais;
                palavraMaisVogais = palavras[i];
            }
        }

        System.out.println("Palavra com mais vogais: " + palavraMaisVogais);
        System.out.println("Quantidade de vogais: " + maxVogais);

        entrada.close();
    }
}
