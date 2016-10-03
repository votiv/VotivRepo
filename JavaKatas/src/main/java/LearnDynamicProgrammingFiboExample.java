import java.util.HashMap;
import java.util.Map;

/**
 * Created by viskyo on 8/13/2015.
 */
public class LearnDynamicProgrammingFiboExample {

    public static void main (String[] args) {

        MITDynamicProgrammingFiboExample mit = new MITDynamicProgrammingFiboExample();

        System.out.println(mit.mitBottomUpBPFibo(8));
    }

    public static long fibonacci(int n) {

        if (n < 3) return 1;
        //Map to store the previous results
        Map<Integer,Long> computedValues = new HashMap<Integer, Long>();
        //The two edge cases
        computedValues.put(1, 1L);
        computedValues.put(2, 1L);

        return fibonacci(n,computedValues);
    }

    private static long fibonacci(int n, Map<Integer, Long> computedValues) {
        if (computedValues.containsKey(n)) return computedValues.get(n);

        computedValues.put(n-1, fibonacci(n-1,computedValues));
        computedValues.put(n-2, fibonacci(n-2,computedValues));

        long newValue = computedValues.get(n-1) + computedValues.get(n-2);
        computedValues.put(n, newValue);
        return newValue;
    }
}


// this is basically the same solution as the above one.
class MITDynamicProgrammingFiboExample {

    public Map<Integer, Long> memo;

    public Long mitDPFibo(int n) {

        // create a map for previous results
        memo = new HashMap<>();
        // for reference put in the two edge cases
        memo.put(1, 1L);
        memo.put(2, 1L);

        Long f;
        // if the result/solution for n is already in the memo, we return it.
        if (memo.containsKey(n)) {
            return memo.get(n);
        // otherwise we look at the sub-problems
        } else {
            f = mitDPFibo(n - 1) + mitDPFibo(n - 2);
        }

        // save the result for n
        memo.put(n, f);
        return f;
    }

    public Long mitBottomUpBPFibo (int n) {

        // create a map for results
        memo = new HashMap<>();
        // for reference put in the two edge cases
        memo.put(1, 1L);
        memo.put(2, 1L);

        Long f;
        for (int k = 1; k <= n; k++) {

            if (k <= 2) f = 1L;
            else f = memo.get(k - 1) + memo.get(k - 2);
            memo.put(k, f);
        }

        return memo.get(n);
    }
}