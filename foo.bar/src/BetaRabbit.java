
/**
 * Created by othniel.visky on 22.07.2016.
 */
public class BetaRabbit {


    private static int power = 0;
    private static int start = power;
    private static int weight = (int) Math.pow(3, power);

    public static String[] answer(int x) {

        int left = x;
        int right = weight;

        calcBack(left, right);

        return new String[0];
    }

    private static boolean calcBack(int left, int right) {

        if (left == right) {
//            makeString();
            return true;
        } else if (left < right) {

            left = left + (int) Math.pow(3, start);
            power = start++;
            weight = (int) Math.pow(3, power);
            right = weight;
            calcBack(left, right);
        } else if (left > right) {
            power++;
            weight = (int) Math.pow(3, power);
            right += weight;
            calcBack(left, right);
        }
        return false;
    }
}
