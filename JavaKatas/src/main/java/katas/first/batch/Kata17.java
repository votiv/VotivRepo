package katas.first.batch;

import java.util.Random;
import java.util.function.ToDoubleFunction;
        import java.util.List;
        import java.util.Map;
/**
 * Created by viskyo on 8/17/2015.
 */
public class Kata17 {


}

/*
class GeneticAlgorithm {
    */
/***************************************************************
     * Feel free to change the private methods' signatures (I did) *
     * Only the "run" functions are tested                         *
     ***************************************************************//*

    private String generate(int length) {
        // TODO: Implement the generate method
    }

    */
/*
     * Select two chromosomes from our original population. This is not done purely randomly.
     * This is done using what is called "roulette wheel selection", where the chances of picking a chromosome are
     * proportional to its fitness! This means we are more likely to pick out chromosomes that are closer to our answer.
     * Duplicate these chromosomes.
     *//*

    private String[] select(List<String> population, List<Double> fitnesses) {

        double[] weight = new double[fitnesses.size()];
        fitnesses.toArray(new double[][]{weight});

        rouletteSelect(weight);

        return null;
    }

    private String mutate(String chromosome, double p) {
        // TODO: Implement the mutate method
    }

    private String[] crossover(String chromosome1, String chromosome2) {
        // TODO: Implement the crossover method
    }

    public String run(ToDoubleFunction<String> fitness, int length, double p_c, double p_m) {
        // TODO: Implement the run method
    }

    public String run(ToDoubleFunction<String> fitness, int length, double p_c, double p_m, int iterations) {
        // TODO: Implement the run method
    }

    // Returns the selected index based on the weights(probabilities)
    int rouletteSelect(double[] weight) {
        // calculate the total weight
        double weight_sum = 0;
        for (double aWeight : weight) {
            weight_sum += aWeight;
        }
        // get a random value
        double value = randUniformPositive() * weight_sum;
        // locate the random value based on the weights
        for(int i=0; i<weight.length; i++) {
            value -= weight[i];
            if(value <= 0) return i;
        }
        // only when rounding errors occur
        return weight.length - 1;
    }

    // Returns a uniformly distributed double value between 0.0 and 1.0
    double randUniformPositive() {
        // easiest implementation
        return new Random().nextDouble();
    }
}*/
