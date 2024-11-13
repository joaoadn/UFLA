public class App {
    public static void main(String[] args) {
        MetodoGenerico mg = new MetodoGenerico();
        mg.souGenerico("A", 1, 1.0);
        mg.souGenerico(1, 2.0,"B");
        mg.souGenerico(1.0, "C", 3.0f);
        mg.souGenerico(1.0f, 'D', mg);
        }
}
