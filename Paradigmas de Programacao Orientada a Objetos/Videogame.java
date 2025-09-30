public class Videogame extends Item {
    private int numeroJogadores;
    private String plataforma;

    public Videogame (String titulo, int tempoReproducao,  
    boolean tenhoCopia, int numeroJogadores, String plataforma) {
        super(titulo, tempoReproducao, tenhoCopia);
        this.numeroJogadores = numeroJogadores;
        this.plataforma = plataforma;
    }

    public int getNumeroJogadores() {
        return numeroJogadores;
    }


}