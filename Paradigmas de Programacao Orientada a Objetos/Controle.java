import java.util.ArrayList;

public class Controle {
    private ArrayList<Cd> cds;
    private ArrayList <Dvd> dvds;

    public Controle() {
        cds = new ArrayList<Cd>();
        dvds = new ArrayList<Dvd>();
    }

    public void adicionarCd(Cd cd) {
        cds.add(cd);
    }

    public void adicionarDvd(Dvd dvd) {
        dvds.add(dvd);
    }

}
