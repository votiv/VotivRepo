package katas.first.batch;

/**
 * Created by viskyo on 8/12/2015.
 */
public class Kata7 {

    public static long findNb(long m) {

        long n = 1;

        if (n < Math.cbrt(m) && makeSum(n) == m) return n;
        else {

            makeSum(n + 1);
        }
        return 0;
    }

    private static long makeSum(long n) {

        return (long) (Math.pow(n, 3) + Math.pow(n + 1, 3));
    }
}
