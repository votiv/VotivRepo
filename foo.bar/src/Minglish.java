/**
 * Created by othniel.visky on 08.08.2016.
 */
public class Minglish {

    public static String answer(String[] words) {

        // get length of longest word
        int wordLength = 0;
        for (String s : words) {
            if (wordLength < s.length()) wordLength = s.length();
        }

        // initialize each string to empty string
        String[] strArray = new String[wordLength];
        for (int l = 0; l < wordLength; l++) {
            strArray[l] = "";
        }

        for (int j = 0; j < wordLength; j++) {

            int i;
            for (i = 0; i < words.length; i++) {

                try {
                    char c = words[i].charAt(j);
                    if (!strArray[j].contains(String.valueOf(c))) {
                        strArray[j] += c;
                    }
                } catch (StringIndexOutOfBoundsException e) {
                }
            }

            if (i == strArray[j].length()) {
                return strArray[j];
            }
        }

        String tmp = "";
        for (String s : strArray) {
            tmp += s;
        }

        String ret = "";
        for (int n = 1; n < tmp.length(); n++) {

            String subStr = tmp.substring(0, n);
            if (subStr.indexOf(tmp.charAt(n)) != -1) {
                int ind = subStr.indexOf(tmp.charAt(n));
                ret = tmp.charAt(n - 1) + tmp.substring(ind, n - 1);
            }
        }

        return ret;
    }
}
