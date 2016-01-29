package katas.first.batch;

import java.math.BigDecimal;
import java.math.RoundingMode;
import java.util.*;

/**
 * Created by viskyo on 21/08/2015.
 */
public class Kata21 {

    public static void main(String[] args) {

        for (Integer i : PerfectPower.isPerfectPower(125)) System.out.println(i);
    }
}

class PerfectPower {
    public static int[] isPerfectPower(int n) {

        if (n == 0 || n == 1) return null;

        Map<Integer, Integer> primesOfN = primeFactors(n);
        int great = gcd(primesOfN.values().toArray(new Integer[primesOfN.values().size()]));
        if (great > 1) {

            BigDecimal num1 = new BigDecimal(1);
            BigDecimal num2 = new BigDecimal(great);

            int[] ret = new int[] {(int) Math.round(Math.pow(n, num1.divide(num2, 100, RoundingMode.HALF_UP).doubleValue())), great};

            return (int) Math.pow(ret[0], ret[1]) == n ? ret : null;
        }

        return null;
    }

    public static Map<Integer, Integer> primeFactors(long number) {

        Map<Integer, Integer> primeFactors = new HashMap<>();
        int count;
        for (int i = 2; i <= number; i++) {
            count = 0;
            while (number % i == 0) {
                number /= i;
                count++;
            }
            if (count == 0) continue;
            primeFactors.put(i, count);
        }
        return primeFactors;
    }

    public static int gcd(int a, int b) {

        while (b > 0) {

            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    public static int gcd(Integer[] input) {

        int result = input[0];
        for (int i = 1; i < input.length; i++) result = gcd(result, input[i]);
        return result;
    }
}
