package live;

import music.playable;
import music.string.veena;
import music.wind.saxophone;

public class test {
    public static void main(String[] args) {

        veena v = new veena();
        v.play();

        saxophone s = new saxophone();
        s.play();

        playable obj = new veena();
        obj.play();

        obj = new saxophone();
        obj.play();
    } 
}
