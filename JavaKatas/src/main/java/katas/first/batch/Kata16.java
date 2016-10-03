package katas.first.batch;

import java.util.ArrayList;
import java.util.List;
/**
 * Created by viskyo on 8/14/2015.
 */
public class Kata16 {

    public static void main(String[] args) {

        List<String> list = new ArrayList<>();
        list.add("1");
        list.add("2");
        list.add("3");
        list.add("4");
        list.add("5");
        list.add("6");
        list.add("7");
        list.add("8");
        list.add("9");
        list.add("10");

        PaginationHelper ph = new PaginationHelper(list, 4);
        System.out.println("item count:   " + ph.itemCount());
        System.out.println("page count:   " + ph.pageCount());
        System.out.println("page index:   " + ph.pageIndex(9));
        System.out.println("page item count:   " + ph.pageItemCount(3));
    }
}


// TODO: complete this object/class

class PaginationHelper<I> {

    List<I> collection;
    int itemsPerPage;

    /**
     * The constructor takes in an array of items and a integer indicating how many
     * items fit within a single page
     */
    public PaginationHelper(List<I> collection, int itemsPerPage) {

        this.collection = collection;
        this.itemsPerPage = itemsPerPage;
    }

    /**
     * returns the number of items within the entire collection
     */
    public int itemCount() {

        return collection.size();
    }

    /**
     * returns the number of pages
     */
    public int pageCount() {

        return (int)Math.ceil(itemCount() / (float)itemsPerPage);
    }

    /**
     * returns the number of items on the current page. page_index is zero based.
     * this method should return -1 for pageIndex values that are out of range
     */
    public int pageItemCount(int pageIndex) {

        if (pageIndex >= pageCount() || pageIndex < 0)
            return -1;
        else if (pageIndex < pageCount()-1)
            return itemsPerPage;
        else
            return itemCount() % itemsPerPage;
    }

    /**
     * determines what page an item is on. Zero based indexes
     * this method should return -1 for itemIndex values that are out of range
     */
    public int pageIndex(int itemIndex) {

        if (itemIndex >= itemCount() || itemIndex < 0)
            return -1;
        else
            return itemIndex / itemsPerPage;
    }
}
