public class App {
    public static void main(String[] args) throws Exception {
    
    ClasseGenerica<String> objeto1 = new ClasseGenerica<>("B", "B", "C");
    ClasseGenerica<Double> objeto2 = new ClasseGenerica<>(9.0,7.0,6.5);

    objeto1.setAtributo1("A");
    objeto2.setAtributo2(1.5);

    System.out.println("Objeto 1 - Atributos: \n" + objeto1.getAtributo1() + "\n" + objeto1.getAtributo2() + "\n" + objeto1.getAtributo3());
    System.out.println("Objeto 2 - Atributos: \n" + objeto2.getAtributo1() + "\n" + objeto2.getAtributo2() + "\n" + objeto2.getAtributo3());
}

}
