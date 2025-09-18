public class App {
        public static void main(String[] args) throws Exception { 
        Estacionamento est = new Estacionamento("Estacionamento do Zé"); 
        est.adicionarCarro("Toyota", "Corolla", "ABC-1234"); 
        est.adicionarCarro("Honda", "Civic", "XAB-5678"); 
        est.adicionarCarro("Ford", "Fiesta", "AEB-9012"); 
        est.adicionarCarro("Chevrolet", "Onix", "GHC-3456"); 
        //Remover carros com placa que contenham "AB" 
        est.removerCarrosPorPlaca("AB"); 
        // Listar carros no estacionamento 
        System.out.println("Carros no " + est.getNome() + ":\n"); 
        est.listarCarros(); 
    } 
}

