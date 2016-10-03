package katas.first.batch;

import java.math.BigInteger;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

/**
 * Created by viskyo on 19/08/2015.
 */
public class Kata20 {

    public static void main(String[] args) {

        System.out.println(ModSystem.fromNb2Str(187, new int[]{8, 7, 5, 3}));
    }

    static List<String> number(List<String> lines) {

        if (lines.size() == 0) return new ArrayList<String>(0);

        List<String> ret = new ArrayList<String>(lines.size());
        for (int i = 1; i <= lines.size(); i++) {

            ret.add(i + ": " + lines.get(i - 1));
        }
        return ret;
    }
}

class Nessie {

    public static boolean isLockNessMonster(String s){

        return s.contains("tree fiddy") || s.contains("tree fiddy".toUpperCase()) || s.contains("3.50");
    }
}

class CamelCase {

    public static String cAmEl(String yourName) {

        yourName = yourName.toLowerCase();
        char[] ret = yourName.toCharArray();
        for (int i = 0; i < ret.length; i++) {

            if (i % 2 == 0) {
                ret[i] = (char) (ret[i] - 32);
            }
        }

        return new String(ret);
    }
}

class Multiplier {
    public static int multiply(int a, int b) {

        /*if (a == 0 || b == 0) return 0;
        if ((a == 1 && b == Integer.MIN_VALUE) || (a == Integer.MIN_VALUE && b == 1)) {
            return Integer.MIN_VALUE;
        } else if (a == Integer.MIN_VALUE || b == Integer.MIN_VALUE) {
            throw new ArithmeticException();
        } else if (a * b == Integer.MIN_VALUE) {
            return Integer.MIN_VALUE;
        }
        if (a > Math.abs(Integer.MAX_VALUE / b) || b > Math.abs(Integer.MAX_VALUE / a)) throw new ArithmeticException();
        return a * b;*/
        return Math.multiplyExact(a, b);
    }
}

class Slope {
    public static String slope(int[] points) {

        if (points[0] == points[2]) return "undefined";
        if (points[1] == points[3]) return "0";
        return String.valueOf((points[3] - points[1]) / (points[2] - points[0]));
    }
}

class ModSystem {

    public static String fromNb2Str(int n, int[] sys) {

        for (int i = 1; i < sys.length; i++) {

            if (BigInteger.valueOf(sys[i - 1]).gcd(BigInteger.valueOf(sys[i])).intValue() != 1) return "Not applicable";
        }
        if (Arrays.stream(sys).reduce(1, (a, b) -> a * b) < n) return "Not applicable";

        StringBuilder ret = new StringBuilder();
        for (int i : sys) {

            ret.append("-");
            ret.append(n % i);
            ret.append("-");
        }

        return ret.toString();
    }
}

