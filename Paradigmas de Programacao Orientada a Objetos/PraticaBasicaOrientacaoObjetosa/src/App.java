public class App {
    public static void main (String[] args) {
        TagPedagio tag1 = new TagPedagio("ABC1D23");
        tag1.passarNoPedagio(15.0);

        TagPedagio tag2 = new TagPedagio("EFG4H56", 20.0);
        tag2.atualizarSaldo(15.0);
        tag2.passarNoPedagio(23.0);
    }
}