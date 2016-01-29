package katas.first.batch;

/**
 * Created by viskyo on 8/10/2015.
 */
public class Kata1 {

    public static int sequence(int[] arr) {

        // if the array is empty we return 0
        if (arr.length == 0) return 0;

        int tmpSum = 0, maxSum = 0;

        for (int n : arr) {

            // temporary sum adds the current element to itself
            tmpSum += n;

            // if the above sum is greater than maxSum, we assign the value of tmpSum to maxSum
            if (maxSum < tmpSum) {

                maxSum = tmpSum;
            // if tmpSum is negative, there is no need to look at numbers in previous positions, so
            // we can safely assign the value at current position to tmpSum
            } else if (tmpSum < 0) {

                tmpSum = 0;
            }
        }
        return maxSum;
    }
}
