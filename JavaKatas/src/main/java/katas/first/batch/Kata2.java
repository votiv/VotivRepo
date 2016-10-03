package katas.first.batch;

/**
 * Created by viskyo on 8/10/2015.
 */
public class Kata2 {

    public static boolean isMerge(String s, String part1, String part2) {

        int i, n, j = 0, k = 0;

        for (i = 0; i < s.length(); i++) {

            n = i;
            while (j < part1.length() && s.charAt(n) == part1.charAt(j)) {

                n++;
                j++;
            }
            while (k < part2.length() && s.charAt(n) == part2.charAt(k)) {

                n++;
                k++;
            }
        }

        System.out.printf("i: %d, j: %d, k: %d\n", i, j, k);
        return i == j + k;
    }
}
