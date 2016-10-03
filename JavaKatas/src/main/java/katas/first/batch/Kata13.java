package katas.first.batch;

/**
 * Created by viskyo on 8/14/2015.
 */
public class Kata13 {

    int width, length, height, volume, surfaceArea;

    public Kata13 (int width, int length, int height) {

        this.width = width;
        this.length = length;
        this.height = height;

        this.volume = width * height * length;
        this.surfaceArea = 2 * (length*width + width*height + height*length);
    }

    public int getWidth() {
        return width;
    }

    public int getLength() {
        return length;
    }

    public int getHeight() {
        return height;
    }

    public int getVolume() {
        return volume;
    }

    public int getSurfaceArea() {
        return surfaceArea;
    }
}
