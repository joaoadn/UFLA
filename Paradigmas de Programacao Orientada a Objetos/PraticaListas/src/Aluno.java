import java.util.Comparator;

public class Aluno{
    private String nomeAluno;
    private int notaAluno;
    private int faltasAluno;


public Aluno(String nome, int nota, int faltas) {
    nomeAluno = nome;
    notaAluno = nota;
    faltasAluno = faltas;
}

public static Comparator<Aluno> getComparator(){
    Comparator<Aluno> comparador = new Comparator<>() {
        @Override
        public int compare(Aluno aluno1, Aluno aluno2){
            return aluno2.getNota() - aluno1.getNota(); // ordem decrescente
        }
    };
    return comparador;
}

// Métodos get

public int getNota() {
    return notaAluno;
}

public String getNome() {
    return nomeAluno;
}

public int getFaltas() {
    return faltasAluno;
}

public String getSituacao() {
    if (faltasAluno >= 19) {
        return "Reprovado";
    } else if (notaAluno >= 60) {
        return "Aprovado";
    } else {
        return "Reprovado";
    }
}
        
}