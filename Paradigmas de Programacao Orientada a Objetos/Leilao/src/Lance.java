public class Lance {
    private String nomePessoa;
    private double valorLance;
    
    public Lance(String pessoa, double valorLance) {
        this.nomePessoa = pessoa;
        this.valorLance = valorLance;
    }
    public String getNomePessoa() {
        return nomePessoa;
    }
    public double getValorLance() {
        return valorLance;
    }
}
