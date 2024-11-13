public class FuncionarioAssalariado extends Funcionario {
    private int salarioBruto;

    public FuncionarioAssalariado(String nome, int salarioBruto) {
        super(nome);
        this.salarioBruto = salarioBruto;
    }
    @Override
    double calcularSalario() {
    return salarioBruto;
    } 
}

