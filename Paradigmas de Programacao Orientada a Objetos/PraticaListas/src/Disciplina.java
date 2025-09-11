import java.util.ArrayList;

public class Disciplina{

    private String codigo; // codigo da disciplina
    private ArrayList<Aluno> alunos; // lista de alunos
    

public Disciplina(String codigoDisciplina){
    alunos = new ArrayList<Aluno>();
    codigo = codigoDisciplina;  
}

public void ordenarDiario(){
    alunos.sort(Aluno.getComparator());
    
}

public void adicionarAluno(Aluno aluno){
    alunos.add(aluno);
}

public ArrayList<Aluno> getListaAlunos() {
    return alunos;
}

public String getCodigo() {
    return codigo;
}


}