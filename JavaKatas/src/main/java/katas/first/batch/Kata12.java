package katas.first.batch;

import java.util.HashMap;
import java.util.Map;

/**
 * Created by viskyo on 8/14/2015.
 */
public class Kata12 {

    public static void main(String[] args) {

        System.out.println(lucasnum(-5));
    }

    public static int lucasnumDP (int n){

        Map<Integer, Integer> memo = new HashMap<>();
        memo.put(0, 2);
        memo.put(1, 1);

        if (memo.containsKey(n)) return memo.get(n);
        else if (n > -1) {

            memo.put(n, lucasnumDP(n - 1) + lucasnumDP(n - 2));
            return lucasnumDP(n - 1) + lucasnumDP(n - 2);
        } else {

            memo.put(n, lucasnumDP(n + 2) - lucasnumDP(n + 1));
            return lucasnumDP(n + 2) - lucasnumDP(n + 1);
        }
    }

    public static int lucasnum (int n) {

        if (n == 0) return 2;
        if (n == 1) return 1;

        if (n > 0) {
            int ret = 0, a = 2, b = 1;
            for (int i = 2; i <= n; i++) {

                ret = a + b;
                a = b;
                b = ret;
            }
            return ret;
        } else {

            int ret = 0, a = 1, b = 3;
            for (int i = 0; i >= n; i--) {

                ret = b - a;
                b = a;
                a = ret;
            }
            return ret;
        }
    }
}