package kauefr;

public class Pokemon {
    private Movimento movimento;
    private Ataque ataque;

    public Movimento getMovimento() {
        return movimento;
    }

    public void setMovimento(Movimento movimento) {
        this.movimento = movimento;
    }

    public Ataque getAtaque() {
        return ataque;
    }

    public void setAtaque(Ataque ataque) {
        this.ataque = ataque;
    }

    public void mover() {
        movimento.mover();
    }
    public void atacar() {
        ataque.atacar();
    }
}
