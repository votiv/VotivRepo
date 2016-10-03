package katas.first.batch;

import java.util.HashMap;
import java.util.Map;

/**
 * Created by viskyo on 8/13/2015.
 */
public class Kata11 {

    public static void main (String[] args) {

        System.out.println(isTriangleNumberDP(2985346));
    }

    public static Boolean isTriangleNumberDP(long number) {

        Map<Integer, Long> memo = new HashMap<>();
        memo.put(0, 0L);
        memo.put(1, 1L);

        for (long k = 2; k <= number; k++) {

            if (memo.containsValue(number)) {
                return true;
            }
            else memo.put((int)k, k * (k + 1) / 2);  // this is the same as: f = k * (k + 1) / 2
                                                        // and then memo.put(k, f);
        }
        return false;
    }

    public static Boolean isTriangleNumber(long number) {

        if (number == 1 || number == 0) return true;

        for (Long k = 2L; k < number; k++) {

            if ((k * (k + 1) / 2) == number) return true;
        }

        return false;
    }
}
