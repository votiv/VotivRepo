package katas.second.batch;

import java.awt.geom.Point2D;
import java.math.BigDecimal;
import java.math.RoundingMode;

/**
 * Created by viskyo on 24/08/2015.
 */
public class Kata1 {

    public static void main(String[] args) {

        System.out.println(coordinates(45.0, 1.0));

//        System.out.println("cos: " + Math.cos(90.0));
//        System.out.println("sin: " + Math.sin(90.0));
    }

    public static Point2D coordinates(Double degrees, Double radius) {

        double x = radius * Math.cos(degrees);
        double y = radius * Math.sin(degrees);
        return new Point2D.Double(x, y);
    }
}
