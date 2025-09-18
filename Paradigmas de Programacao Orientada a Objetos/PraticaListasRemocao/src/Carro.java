public class Carro {
    private String marca;
    private String modelo;
    private String placa;

    public Carro(String marcaCarro, String modeloCarro, String placaCarro){
        marca = marcaCarro;
        modelo = modeloCarro;
        placa = placaCarro;
    }

    public String getMarca(){
        return marca;
    }

    public String getModelo(){
        return modelo;
    }

    public String getPlaca(){
        return placa;
    }
}