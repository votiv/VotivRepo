import java.text.DateFormat;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Date;
import java.util.List;

/**
 * Created by othniel.visky on 21.07.2016.
 */

public class Answer {

    public static String answer(int x, int y, int z) {

        DateFormat df = new SimpleDateFormat("MM/dd/yy");
        df.setLenient(false);
        List<String> dates = new ArrayList<>();
        int count = 0;
        Date retDate = new Date();
        Boolean valid = false;

        if (x == y || y == z || z == x) valid = true;

        dates.add(x + "/" + y + "/" + z);
        dates.add(x + "/" + z + "/" + y);
        dates.add(y + "/" + x + "/" + z);
        dates.add(y + "/" + z + "/" + x);
        dates.add(z + "/" + y + "/" + x);
        dates.add(z + "/" + x + "/" + y);

        for (String date : dates) {

            try {
                retDate = df.parse(date);
            } catch (ParseException e) {
                count++;
            }
        }

        if (valid) return df.format(retDate);
        if (count != 5) return "Ambiguous";
        else return df.format(retDate);
    }
}
