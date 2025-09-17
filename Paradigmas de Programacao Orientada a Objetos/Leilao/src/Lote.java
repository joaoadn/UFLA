public class Lote {
    private int numero;
    private static int proximoNumero; // proximo numero disponivel pro lote
    private String descricao;
    private Lance maiorLance;
    
    public Lote(String descricao) {
        this.descricao = descricao;
        numero = proximoNumero++;
    }
    public double getValorMaiorLance() {
        return maiorLance.getValorLance();
    }
    public int getNumero() {
        return numero;
    }
    // NOVO MÉTODO
    public boolean registrarLance(Lance lance) {
        if (maiorLance == null || lance.getValorLance() > maiorLance.getValorLance()) {
            maiorLance = lance;
            return true;
        }
        return false;
    }
    
    // NOVO MÉTODO
    public String obterDados(){
        if (maiorLance == null){
            return "Lote número: " + getNumero() + "\n" +
            "Descrição: " + descricao + "\n" +
            "Maior lance: R$" + "" + "\n" 
            + "Sera vendido para: "
            + "\n";
        }
            return "Lote numero: " + getNumero() + "\n" +
            "Descricao: "  + descricao + "\n" + 
            "Maior lance: R$" + maiorLance.getValorLance() + 
            "\n" + "Sera vendido para: " + maiorLance.getNomePessoa()
            + "\n";
    }
}