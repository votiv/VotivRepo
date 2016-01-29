import katas.first.batch.Kata10;

import java.io.BufferedReader;
import java.io.StringReader;
import java.util.ArrayList;

/**
 * Created by viskyo on 8/10/2015.
 */
public class KataMain {

    public static void main (String[] args) {

        ArrayList<String> list = new ArrayList<String>();
        list.add("lol");
        list.add("roFl");
        list.add("dude");
        list.add("sTuff");
        list.add("shiT");

        BufferedReader reader = new BufferedReader(new StringReader("lol this\nis phun!"));

        Object[] rot = Kata10.rotate(new Object[]{1, 2, 3, 4, 5}, 2);
        for (Object r : rot) {

            System.out.print(r.toString() + " ");
        }
    }
}
