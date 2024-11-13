import java.util.ArrayList;
import java.util.InputMismatchException;
import java.util.List;
import java.util.Scanner;

public class Agenda {
    List<Pessoa> listaDePessoas = new ArrayList<>();
    private static final Scanner scanner = new Scanner(System.in); 
    public void cadastrarPessoaFisica() {
        System.out.print("Nome: ");
        String nome = scanner.nextLine();
        System.out.print("Endereço: ");
        String endereco = scanner.nextLine();
        System.out.print("Email: ");
        String email = scanner.nextLine();
        System.out.print("CPF: ");
        String cpf = scanner.nextLine();
        System.out.print("Estado Civil: ");
        String estadoCivil = scanner.nextLine();
        PessoaFisica pessoaFisica = new PessoaFisica(nome, endereco, email, cpf, estadoCivil);
        listaDePessoas.add(pessoaFisica);
    }
    
    public void cadastrarPessoaJuridica() {
        System.out.print("Nome: ");
        String nome = scanner.nextLine();
        System.out.print("Endereço: ");
        String endereco = scanner.nextLine();
        System.out.print("Email: ");
        String email = scanner.nextLine();
        System.out.print("CNPJ: ");
        String cnpj = scanner.nextLine();
        
        int inscricaoEstadual = 0;
        boolean entradaValida = false;
        while (!entradaValida) {
            try {
                System.out.print("Inscrição Estadual: ");
                inscricaoEstadual = Integer.parseInt(scanner.nextLine());
                entradaValida = true;
            } catch (NumberFormatException e) {
                System.out.println("Por favor, insira um número válido para a Inscrição Estadual.");
            }
        }
        
        PessoaJuridica pessoaJuridica = new PessoaJuridica(nome, endereco, email, cnpj, inscricaoEstadual);
        listaDePessoas.add(pessoaJuridica);
    }
    
    public void removerContato() {
        if (listaDePessoas.isEmpty()) {
            System.out.println("A lista de contatos está vazia.");
            return;
        }
    
        System.out.println("Contatos disponíveis:");
    
        for (int i = 0; i < listaDePessoas.size(); i++) {
            System.out.println(i + ": " + listaDePessoas.get(i).getNome());
        }
    
        System.out.print("Selecione o número do contato que deseja remover: ");
        int escolha = -1;
    
        try {
            escolha = scanner.nextInt();
        } catch (InputMismatchException e) {
            System.out.println("Entrada inválida. Insira um número válido.");
            return;
        }
    
        if (escolha >= 0 && escolha < listaDePessoas.size()) {
            listaDePessoas.remove(escolha);
            System.out.println("Contato removido com sucesso.");
        } else {
            System.out.println("Escolha inválida. Nenhum contato foi removido.");
        }
    }
    
    public void imprimirDados() {
        if (listaDePessoas.isEmpty()) {
            System.out.println("A lista de contatos está vazia.");
            return;
        }
        
        System.out.println("Lista de Contatos:");
        for (Pessoa contato : listaDePessoas) {
            System.out.println("Nome: " + contato.getNome());
            System.out.println("Endereço: " + contato.getEndereco());
            System.out.println("Email: " + contato.getEmail());
            System.out.println("ID: " + contato.getID());
            System.out.println(); // Pule uma linha entre cada contato
        }
    }
}


