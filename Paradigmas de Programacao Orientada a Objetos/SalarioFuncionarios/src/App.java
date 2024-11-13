import java.util.ArrayList;

public class App {
    public static void main(String[] args) throws Exception {
        ArrayList<Funcionario> funcs = new ArrayList<>();
        funcs.add(new FuncionarioAssalariado("João Dias", 3000));
        funcs.add(new FuncionarioHorista("Pedro Augusto", 400, 20));
        for(Funcionario f: funcs) {
            System.out.println(f);
        }
    }
}
