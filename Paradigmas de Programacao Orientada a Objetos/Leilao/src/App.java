class App {
    public static void main(String[] args) {
        Leilao leilao = new Leilao();
        leilao.adicionarLote(new Lote("Camisas"));
        leilao.adicionarLote(new Lote("Relógios"));
        leilao.adicionarLote(new Lote("Perfumes"));
        leilao.darLance(1, "Pedro", 1000);
        leilao.darLance(1, "Ricardo", 990);
        leilao.darLance(2, "Cristiano", 5000);
        leilao.darLance(2, "Alberto", 5500);
        leilao.darLance(4, "Renato", 500);
        leilao.mostrarRelatorioFinal();
    }
}