public class MetodoGenerico {
    public <T,U,V> void souGenerico(T t, U u, V v){
        System.out.println("Tipo T: " + t.getClass().getName());
        System.out.println("Tipo U: " + u.getClass().getName());
        System.out.println("Tipo V: " + v.getClass().getName());
    }
}
