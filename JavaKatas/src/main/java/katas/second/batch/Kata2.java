package katas.second.batch;

import java.util.Arrays;
import java.util.stream.Collector;
import java.util.stream.DoubleStream;
import java.util.stream.IntStream;
import java.util.stream.Stream;

/**
 * Created by viskyo on 24/08/2015.
 */
public class Kata2 {

    public static void main(String[] args) {

        Tribonacci tri = new Tribonacci();

        for (double i : tri.tribonacci(new double[]{0, 1, 1}, 10)) {
            System.out.println(i);
        }
    }
}

class Tribonacci {

    public int fibo(int n) {
        if (n <= 1) return 1;
        return fibo(n - 1) + fibo(n - 2);
    }

    public double[] tribonacci(double[] s, int n) {

        return IntStream.rangeClosed(0, n)
                .


    }
}

class Xbonacci {

    public double[] xbonacci(double[] signature, int n) {

        return new double[]{};
    }
}
