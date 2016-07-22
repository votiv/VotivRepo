import java.util.ArrayList;
import java.util.List;

/**
 * Created by othniel.visky on 22.07.2016.
 */
public class BetaRabbit {


    private static int power = 0;
    private static int start = power;
    private static int weight = (int) Math.pow(3, power);
    private static int left;
    private static int right = 0;

    public static String[] answer(int x) {

        left = x;
        right = weight;

        calcBack(left, right);

        return new String[0];
    }

    private static boolean calcBack(int left, int right) {

        if (left == right) {
            makeString();
            return true;
        } else if (left < right) {

            left = left + (int) Math.pow(3, start);
            power = start++;
            weight = (int) Math.pow(3, power);
            right = weight;
        } else if (left > right) {
            power++;
            weight = (int) Math.pow(3, power);
            right += weight;
        }
        return false;
    }
}
