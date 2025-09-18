import java.util.ArrayList;

public class Estacionamento {
    private String nome;
    private ArrayList<Carro> carros;

    public Estacionamento(String nomeEstacionamento) {
        nome = nomeEstacionamento;
        carros = new ArrayList<>();
    }
    public void adicionarCarro(String marca, String modelo, String placa) {
        carros.add(new Carro(marca,modelo,placa));
    }

    public void removerCarrosPorPlaca(String placaRemovida) {
        for (int i = 0; i < carros.size(); i++){
            if (carros.get(i).getPlaca().equals(placaRemovida))
                carros.remove(i);
        }
    }

    public String getNome(){
        return nome;
    }

    public void listarCarros(){
        for (Carro carro : carros){
            System.out.println ("Carro: " + carro.getMarca() + " " + carro.getModelo() + " " + "Placa: " + carro.getPlaca());
        }
    }
    
}
