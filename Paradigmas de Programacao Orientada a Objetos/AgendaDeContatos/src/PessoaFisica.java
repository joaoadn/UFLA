public class PessoaFisica extends Pessoa{
    private String cpf;
    private String estadoCivil;
    public PessoaFisica(String nome, String endereco, String email, String cpf, String estadoCivil) {
        super(nome, endereco, email);
        this.cpf = cpf;
        this.estadoCivil = estadoCivil;
    }    
    @Override
    public String getID(){
        return this.cpf;
    }
    public String getEstadoCivil(){
        return this.estadoCivil;
    }
}   
