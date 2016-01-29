package katas.first.batch;

/**
 * Created by viskyo on 8/12/2015.
 */
public class Kata10 {

    public static Object[] rotate(Object[] data, int n) {

        if (n == 0 || n == data.length) return data;
        if (data.length == 0) return null;

        if (n < 0) {

            reverseArray(data);
            rotateArray(data, -1 * n);
            reverseArray(data);
        } else {

            rotateArray(data, n);
        }

        return data;
    }

    private static void rotateArray(Object[] data, int n) {
        for (int i = 0; i < n; i++) {

            Object tmp = data[data.length - 1];
            for (int j = data.length - 1; j >= 0; j--) {

                data[j] = j == 0 ? tmp : data[(j - 1 + data.length) % data.length];
            }
        }
    }

    private static void reverseArray(Object[] data) {

        for (int i = 0, j = data.length - 1; j > i; j--, i++) {
            Object tmp = data[j];
            data[j] = data[i];
            data[i] = tmp;
        }
    }
}