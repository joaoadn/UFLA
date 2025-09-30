public class Cd extends Item {
    private String artista;
    private int numeroFaixas;

    public Cd(String artista, int numeroFaixas, int tempoReproducao,
    boolean tenhoCopia) {
        super(artista, tempoReproducao, tenhoCopia);
        this.artista = artista;
        this.numeroFaixas = numeroFaixas;
    }


    public String getArtista() {
        return artista;
    }

    public int getNumeroFaixas() {
        return numeroFaixas;
    }

    @Override
    public String getDescricao() {
        String descricao = super.getDescricao();
        descricao += "Artista: " + artista + "\n" +
        "Número de faixas: " + numeroFaixas + "\n";

        return descricao;
        
    }


}