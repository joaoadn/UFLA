public class PessoaJuridica extends Pessoa{
    private String cnpj;
    private int inscricaoEstadual;
    public PessoaJuridica(String nome, String endereco, String email, String cnpj, int inscricaoEstadual) {
        super(nome, endereco, email);
        this.cnpj = cnpj;
        this.inscricaoEstadual = inscricaoEstadual;
    }
    @Override
    public String getID(){
        return this.cnpj;
    }
    public int getInscricaoEstadual(){
        return this.inscricaoEstadual;
    }
}