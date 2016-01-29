import katas.second.batch.Kata1;
import org.testng.annotations.Test;

import java.awt.geom.Point2D;
import static katas.second.batch.Kata1.*;
import static org.testng.AssertJUnit.assertEquals;

/**
 * Created by viskyo on 24/08/2015.
 */
public class testCoordinates {

    @Test
    public void test_1() {

        Point2D result = new Kata1().coordinates(90.0,1.0);
        assertEquals("Incorrect coordinates", new Point2D.Double(0.0,1.0), result);
    }
}
