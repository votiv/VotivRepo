package katas.first.batch;

/**
 * Created by viskyo on 8/11/2015.
 */
public class Kata5 {

    public static int findIt(int[] A) {

        int count = 0;

        for (int a : A) {

            for (int b : A) {

                if (a == b) {
                    count++;
                }
            }
            if (count % 2 == 1) { return a; }
        }
        return 0;
    }
}
