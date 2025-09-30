public class Dvd extends Item {
    private String diretor;

    public Dvd(String titulo, int tempoReproducao,
    boolean tenhoCopia, String diretor) {
        super(titulo, tempoReproducao, tenhoCopia);
        this.diretor = diretor;
    }

    public String getDiretor() {
        return diretor;
    }

    @Override
    public String getDescricao() {
        String descricao = super.getDescricao();
        descricao += "Diretor: " + diretor + "\n";

        return descricao;
        
    }
   

}