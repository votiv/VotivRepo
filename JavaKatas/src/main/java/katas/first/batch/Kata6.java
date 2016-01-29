package katas.first.batch;

/**
 * Created by viskyo on 8/11/2015.
 */
public class Kata6 {

    public static boolean isPalindrome(String str) {

        str = str.toLowerCase().replaceAll("\\W", "");
        return str.equals(new StringBuilder(str).reverse().toString());
    }
}
