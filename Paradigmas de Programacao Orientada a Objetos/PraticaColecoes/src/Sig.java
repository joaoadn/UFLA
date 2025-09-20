import java.util.*;

public class Sig {
    private Map<String, Disciplina> disciplinas = new HashMap<>();
    private Scanner sc = new Scanner(System.in);

    public void executar() {
        int op;
        do {
            System.out.println("\n### MENU ###\n1. Cadastrar disciplina\n2. Cadastrar dados de aluno em disciplina\n3. Mostrar diario de disciplina\n4. Sair");
            System.out.print("Escolha uma opcao: ");
            op = sc.nextInt();
            if (op == 1) {
                System.out.print("Codigo da disciplina: ");
                String cod = sc.next();
                disciplinas.putIfAbsent(cod, new Disciplina(cod));
            } else if (op == 2) {
                System.out.print("Codigo da disciplina: ");
                Disciplina d = disciplinas.get(sc.next());
                if (d == null) {
                    System.out.println("Disciplina nao encontrada.");
                    continue;
                }
                System.out.print("Nome: "); String nome = sc.next();
                System.out.print("Nota: "); int nota = sc.nextInt();
                System.out.print("Faltas: "); int faltas = sc.nextInt();
                d.adicionarAluno(new Aluno(nome, nota, faltas));
            } else if (op == 3) {
                System.out.print("Codigo da disciplina: ");
                Disciplina d = disciplinas.get(sc.next());
                if (d == null) {
                    System.out.println("Disciplina nao encontrada.");
                    continue;
                }
                d.ordenarDiario();
                System.out.println("\nDisciplina: " + d.getCodigo());
                System.out.printf("%-10s %-12s %-8s %-10s %n","Nome","Nota","Faltas","Situacao");
                for (Aluno a : d.getListaAlunos())
                    System.out.printf("%-10s %-12s %-8s %-10s %n",a.getNome(),a.getNota(),a.getFaltas(),a.getSituacao());
            }
        } while (op != 4);
    }
}