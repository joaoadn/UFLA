import java.util.Scanner;

public class Menu {
    private Agenda agenda;
    private Scanner entrada;
    public Menu() {
        entrada = new Scanner(System.in);
        agenda = new Agenda(); // Crie uma instância da classe Agenda.
    }
    public void executar(){
        int op;
        do{
            exibirOpcoes();
            op = Integer.parseInt(entrada.nextLine());
            executarOpcao(op);
        }while(op != 5);
    }
    private void exibirOpcoes() {
        System.out.println("=======Menu de Opções=======");
        System.out.println("1 - Cadastrar uma pessoa física");
        System.out.println("2 - Cadastrar uma pessoa jurídica");
        System.out.println("3 - Remover um contato");
        System.out.println("4 - Imprimir dados da agenda");
        System.out.print("5 - Sair");
    }
    private void executarOpcao(int op) {
        switch (op) {
            case 1:
                agenda.cadastrarPessoaFisica();
                break;
            case 2:
                agenda.cadastrarPessoaJuridica();
                break;
            case 3:
                agenda.removerContato();
                break;
            case 4:
                agenda.imprimirDados();
                break;
            case 5:
                System.out.println("Encerrando o programa.");
                break;
            default:
                System.out.println("Escolha uma opção entre 1 e 5!");
        }
    }
}
