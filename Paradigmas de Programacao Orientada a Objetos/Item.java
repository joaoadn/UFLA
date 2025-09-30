public class Item {
    
    private String titulo; 
    private int tempoReproducao;
    private String comentario;
    private boolean tenhoCopia;

    public Item(String titulo, int tempoReproducao,
    boolean tenhoCopia) {
        this.titulo = titulo;
        this.tempoReproducao = tempoReproducao;
        this.tenhoCopia = tenhoCopia;
        comentario = "";
    }

    public void setComentario(String comentario) {
        this.comentario = comentario;
    }

    public String getComentario(String comentario) {
        return comentario;
    }

    public boolean getTenhoCopia() {
        return tenhoCopia;
    }

    public String getDescricao() {
        String resposta;
        if(getTenhoCopia()) resposta = "sim";
        else resposta = "nao";

        return "Título: " + titulo + "\n" +
        "Tempo de reprodução: " + tempoReproducao + 
        "\n" + "Tenho Cópia?: " + resposta + "\n" +
        "Comentário: " + comentario + "\n";
    }
}