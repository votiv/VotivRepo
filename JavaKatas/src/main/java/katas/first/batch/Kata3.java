package katas.first.batch;

/**
 * Created by viskyo on 8/10/2015.
 */
public class Kata3 {

    public static int  maxPizza(int cut) {

        return cut > 0 ? ((cut * cut + cut + 2) / 2) : -1;
    }
}
