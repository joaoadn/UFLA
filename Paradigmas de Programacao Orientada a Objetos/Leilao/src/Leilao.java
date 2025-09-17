import java.util.ArrayList;

public class Leilao {
    private ArrayList<Lote> lotes;
    public Leilao() {
        lotes = new ArrayList<>();
    }
    public void darLance(int nrLote, String nomePessoa, double valor) {
        Lote loteSelecionado = getLote(nrLote);
        if (loteSelecionado != null) {
            if (loteSelecionado.registrarLance(new Lance(nomePessoa, valor))) {
                System.out.println("Lance para o lote " + nrLote + " efetivado com sucesso!");
            } else {
                System.out.println("O lote " + nrLote + " já possui um lance de R$ " + loteSelecionado.getValorMaiorLance());
            }
        } else {
            System.out.println("O lote " + nrLote + " não existe!");
        }
    }
    public Lote getLote(int nrLote) {
        for (Lote lote : lotes) {
            if (lote.getNumero() == nrLote) {
                return lote;
            }
        }
        return null;
    }
    // NOVO MÉTODO
    public void adicionarLote (Lote lote) {
        lotes.add(lote);  
    }
    // NOVO MÉTODO
    public void mostrarRelatorioFinal() {
        for (Lote lote : lotes) {
            System.out.println (lote.obterDados());   
        }
    }
}