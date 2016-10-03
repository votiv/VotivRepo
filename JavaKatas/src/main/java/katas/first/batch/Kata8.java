package katas.first.batch;

/**
 * Created by viskyo on 8/12/2015.
 */
public class Kata8 {

    public static String stat(String strg) {

        if (strg.equals("")) return "";
        if (strg.contains("null")) strg = strg.replaceAll(String.valueOf("null"), "00");

        String[] team = strg.split(", ");

        // Converting the times of each member to seconds
        int[] secSum = new int[team.length];
        for (int i = 0; i < team.length; i++) {


            secSum[i] = Integer.valueOf(team[i].split("\\|")[0]) * 3600
                    + Integer.valueOf(team[i].split("\\|")[1]) * 60
                    + Integer.valueOf(team[i].split("\\|")[2]);
        }

        // determine range
        int max = secSum[0], min = secSum[0], intRange;
        for (int n : secSum) {

            max = Math.max(max, n);
            min = Math.min(min, n);
        }
        intRange = max - min;

        // determine average
        int intAverage, avSum = 0;
        for (int n : secSum) {

            avSum += n;
        }
        intAverage = avSum / secSum.length;

        // determine median
        secSum = mySort(secSum);
        int intMedian = (secSum.length % 2 == 1 ? secSum[secSum.length / 2] : (secSum[secSum.length / 2 - 1] + secSum[secSum.length / 2]) / 2);

        // converting seconds into h|m|s format, and building string
        String strRange = convertSecToFormat(intRange);
        String strAverage = convertSecToFormat(intAverage);
        String strMedian = convertSecToFormat(intMedian);

        return "Range: " + strRange + " Average: " + strAverage + " Median: " + strMedian;
    }

    private static String convertSecToFormat(int secs) {

        int h = 0, m, s = secs % 60;
        StringBuilder ret = new StringBuilder();

        m = secs / 60;
        if (m >= 60) {

            while (m > 60) {

                m = m - 60;
                h++;
            }
        }

        if (h / 10 < 1) {

            ret.append("0").append(h);
        } else {
            ret.append(h);
        }
        ret.append("|");
        if (m / 10 < 1) {

            ret.append("0").append(m);
        } else {
            ret.append(m);
        }
        ret.append("|");
        if (s / 10 < 1) {

            ret.append("0").append(s);
        } else {
            ret.append(s);
        }
        return ret.toString();
    }

    private static int[] mySort(int[] secSum) {

        for(int i = 1; i < secSum.length; i++) {

            int key = secSum[i];
            int k = i - 1;
            while(k >= 0 && secSum[k] > key) {

                secSum[k + 1] = secSum[k];
                k--;
            }
            secSum[k + 1] = key;
        }
        return secSum;
    }
}
