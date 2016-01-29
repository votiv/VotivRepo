package katas.first.batch;

import java.io.BufferedReader;
import java.util.Arrays;
import java.util.Comparator;
import java.util.List;
import java.util.stream.Collectors;

import static java.util.stream.Collectors.toList;

/**
 * Created by viskyo on 8/10/2015.
 */
public class Kata4 {

    /**
     * Create a new list with all the strings from original list converted to
     * lower case. The list is not empty or have nulls.
     */
    public static List<String> exercise1(List<String> list) {

        return list
                .stream()
                .map(String::toLowerCase)
                .collect(toList());
    }

    /**
     * Modify exercise 1 so that the new list only contains strings that have an
     * odd length. the list is not empty or have nulls.
     */
    public static List<String> exercise2(List<String> list) {

        return list
                .stream()
                .filter(s -> s.length() % 2 != 0)
                .collect(toList());
    }

    /**
     * Join the second, third and forth strings of the list into a single string,
     * where each word is separated by a hyphen (-). Print the resulting string.
     *
     * NOTE: if list have less than 2 elements, return null.
     *       if the list is between 3 and 4 elements, add as many elements as there is.
     */
    public static String exercise3(List<String> list) {

        String joinedStr;
        if (list.size() >= 3 && list.size() <= 4) {

            joinedStr = list
                    .stream()
                    .collect(Collectors.joining("-"));
        } else {

            joinedStr = list
                    .stream()
                    .filter(s -> list.indexOf(s) == 3 || list.indexOf(s) == 4)
                    .collect(Collectors.joining("-"));
        }

        return list.size() <= 2 ? null : joinedStr;
    }

    /**
     * Count the number of lines in the BufferedReader provided.
     */
    public static int exercise4(BufferedReader reader) {

        return (int) reader.lines().count();
    }

    /**
     * Create a list of words from reader with no duplicates contained
     * in the reader.
     *
     * HINT: A regular expression, WORD_REGEXP, is already defined for your use.
     */
    public static List<String> exercise5(BufferedReader reader) {

        final String WORD_REGEX = "\\s+";

        return reader.lines()
                .map(line -> line.split(WORD_REGEX))
                .flatMap(Arrays::stream)
                .distinct()
                .collect(toList());
    }

    /**
     * Create a list of words from reader, converted to lower-case and
     * with duplicates removed, which is sorted by natural order.
     */
    public static List<String> exercise6(BufferedReader reader) {

        final String WORD_REGEX = "[- .:,]+";

        return reader.lines()
                .map(line -> line.split(WORD_REGEX))
                .flatMap(Arrays::stream)
                .distinct()
                .map(String::toLowerCase)
                .sorted(Comparator.<String>naturalOrder())
                .collect(toList());
    }

    /**
     * Modify exercise6 so that the words are sorted by length.
     */
    public static List<String> exercise7(BufferedReader reader) {

        final String WORD_REGEX = "[- .:,]+";

        return reader.lines()
                .map(line -> line.split(WORD_REGEX))
                .flatMap(Arrays::stream)
                .distinct()
                .map(String::toLowerCase)
                .sorted(Comparator.comparingInt(String::length))
                .collect(toList());
    }
}