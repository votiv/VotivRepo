package katas.first.batch;

import java.util.ArrayList;
import java.util.List;

/**
 * Created by viskyo on 19/08/2015.
 */
public class Kata19 {

    public String[] greetingForAllFriends(String... friends) {

        if (friends.length == 0) return null;

        List<String> ret = new ArrayList<>();
        for (String f : friends) {

            if (f != null) ret.add("Hello, " + f + "!");
            else return null;
        }
        return (String[]) ret.toArray();
    }
}
