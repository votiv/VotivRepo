package katas.first.batch;

import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import java.util.Random;

import static org.testng.AssertJUnit.assertEquals;

/**
 * Created by viskyo on 8/14/2015.
 */
public class Kata15 {

    public static void main(String[] args) {

        Ghost ghost = new Ghost();

        System.out.println(ghost.getColor() + "   " + ghost.getColor());
    }
}

class Ghost {

    Color color;

    public Ghost () {

        this.color = Color.randomColor();
    }

    public String getColor() {
        return color.toString().toLowerCase();
    }

    enum Color {

        WHITE, YELLOW, PURPLE, RED, white, yellow, purple, red;

        public static final List<Color> VALUES = Collections.unmodifiableList(Arrays.asList(values()));
        public static final int SIZE = VALUES.size();
        public static final Random RANDOM = new Random();

        public static Color randomColor()  {
            return VALUES.get(RANDOM.nextInt(SIZE));
        }
    }
}
