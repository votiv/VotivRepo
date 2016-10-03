package katas.first.batch;

import java.math.BigDecimal;
import java.math.RoundingMode;

/**
 * Created by viskyo on 21/08/2015.
 */
public class Kata22 {
    public static void main(String[] args) {

        try {

            for (int i : PerfectPower2.isPerfectPower(6128487)) System.out.println(i);
        } catch (NullPointerException e) {
            System.out.println(e);
        }
    }
}

class PerfectPower2 {

    public static int[] isPerfectPower(int n) {

        if (n == 0 || n == 1) return null;

        for (int p = 2; p <= (Math.log(n) / Math.log(2)) + n; p++) {

            if (isPrime(p)) {

                // x = n to the power of 1 / p. This is the same as extracting root p from n.
                // But 1 / p is always 0, so Math.pow(n, 0) is always 1. To avoid this, we divide with BigDecimals.
                // At the end we need to round the number, because Math.pow can result is y.9999 or similar.
                int x = (int) Math.round(Math.pow(n, new BigDecimal(1).divide(new BigDecimal(p), 100, RoundingMode.HALF_UP).doubleValue()));
                if (n == Math.pow(x, p)) return new int[]{x, p};
            }
        }
        return null;
    }

    private static boolean isPrime(int p) {

        if (p != 2 && p % 2 == 0) return false;

        for (int i = 3; i * i <= Math.sqrt(p); i += 2) {

            if (p % i == 0) return false;
        }
        return true;
    }
}
