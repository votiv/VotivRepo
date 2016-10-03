/**
 * Created by othniel.visky on 21.07.2016.
 */
public class Answer2 {

    public static String answer(int x, int y, int z) {
        String ret = "";

        ret = checkIt(x, y, z);
        if (!ret.equals("Ambiguous")) return ret;
        ret = checkIt(x, z, y);
        if (!ret.equals("Ambiguous")) return ret;

        ret = checkIt(y, x, z);
        if (!ret.equals("Ambiguous")) return ret;
        ret = checkIt(y, z, x);
        if (!ret.equals("Ambiguous")) return ret;

        ret = checkIt(z, y, x);
        if (!ret.equals("Ambiguous")) return ret;
        ret = checkIt(z, x, y);

        return ret;
    }

    private static String checkIt(int month, int day, int year) {

        if (month == day) return month + "/" + day + "/" + year;
        if (month == year) return month + "/" + day + "/" + year;
        if (day == year) return month + "/" + day + "/" + year;

        if (year > 31 && month <= 12 && (day > 12 && day <= 31))
            return month + "/" + day + "/" + year;
        return "Ambiguous";
    }
}
