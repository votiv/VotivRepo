package katas.first.batch;

import java.util.stream.IntStream;

/**
 * Created by viskyo on 8/12/2015.
 */
public class Kata9 {

    public static int findSmallestInt(int[] args) {

        return IntStream.of(args).min().getAsInt();
    }
}
