public class TagPedagio {
    private String placa;
    private double saldo; 


    public TagPedagio(String placa, double credito) {
        this.placa = placa;
        saldo = credito + 10;
    }

    public TagPedagio(String placa) {
        this.placa = placa;
        saldo = 10;
    }

    public void atualizarSaldo(double valor) {
        saldo += valor;
    }

    public void passarNoPedagio(double valorPedagio) {
        if (saldo >= valorPedagio) {
            saldo -= valorPedagio;
            System.out.println("Passagem liberada para " + placa + ". Novo saldo: " + String.format("%.2f", saldo) + ".");
        } else {
            System.out.println("Passagem bloqueada para " + placa + ". Saldo insuficiente!");
        }
    }

}
    

