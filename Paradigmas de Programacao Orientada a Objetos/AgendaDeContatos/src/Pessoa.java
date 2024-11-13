public abstract class Pessoa{
    private String nome;
    private String endereco;
    private String email;
    public Pessoa(String nome, String endereco, String email) {
        this.nome = nome;
        this.endereco = endereco;
        this.email = email;
    } 
    public String getNome(){
        return this.nome;
    }
    public String getEndereco(){
        return this.endereco;
    }
    public String getEmail(){
        return this.email;
    }
    public abstract String getID();
}