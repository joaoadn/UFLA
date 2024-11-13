public class FuncionarioHorista extends Funcionario {
    private int salarioPorHora;
    private int horasTrabalhadas;
    
    public FuncionarioHorista(String nome, int salarioPorHora, int horasTrabalhadas) {
        super (nome);
        this.salarioPorHora = salarioPorHora;
        this.horasTrabalhadas = horasTrabalhadas;
    }
    @Override
        double calcularSalario() {
        return salarioPorHora * horasTrabalhadas;
    }
}
