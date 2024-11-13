public abstract class Funcionario {
    private String nome;

    public Funcionario(String nome) {
        this.nome = nome;
    }

    abstract double calcularSalario();

    @Override
    public String toString() {
        return "Nome: " + nome + "\nSalario: " + calcularSalario();
    }
}
