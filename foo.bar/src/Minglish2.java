import java.util.*;

/**
 * Created by othniel.visky on 08.08.2016.
 */
public class Minglish2 {

    public static String answer(String[] words) {

        // get length of longest word
        int wordLength = 0;
        for (String s : words) {
            if (wordLength < s.length()) wordLength = s.length();
        }

        List<Vertex> vertices = new ArrayList<>();

        // initialize each string to empty string
        String[] strArray = new String[wordLength];
        for (int l = 0; l < wordLength; l++) {
            strArray[l] = "";
        }

        for (int j = 0; j < wordLength; j++) {

            int i;
            for (i = 0; i < words.length; i++) {

                try {
                    char c = words[i].charAt(j);
                    if (!strArray[j].contains(String.valueOf(c))) {
                        strArray[j] += c;
                    }
                } catch (StringIndexOutOfBoundsException e) {
                }
            }
        }

        // strings
        for (String str : strArray) {

            // characters
            for (int j = 0; j < str.length(); j++) {

                Vertex vertex = new Vertex(String.valueOf(str.charAt(j)));
                if (!containsName(vertices, vertex.getName())) {
                    try {
                        Vertex target = new Vertex(String.valueOf(str.charAt(j + 1)));
                        vertex.adjacencies = new Vertex[]{target};
                    } catch (StringIndexOutOfBoundsException e) {
                        vertex.adjacencies = new Vertex[]{vertex};
                    }
                    vertices.add(vertex);
                }
            }
        }

        /*for (Vertex v : vertices) {
            System.out.println(v.name + " -> " + Arrays.toString(v.adjacencies));
        }*/

//        System.out.println(Arrays.toString(vertices.get(1).adjacencies));
        System.out.println(getPath(vertices.get(0), vertices.get(vertices.size() - 1)));
        for (int i = 0; i < vertices.size() - 1; i++) {
        }

        return "";
    }

        static Map<Vertex, Vertex> nextNodeMap = new HashMap<>();
        static Queue<Vertex> queue = new LinkedList<>();
    static List<Vertex> directions = new LinkedList<>();
    private static List getPath(Vertex start, Vertex finish) {

        //Initialization.
        Vertex current = start;

        //Queue
        queue.add(current);

    /*
     * The set of visited nodes doesn't have to be a Map, and, since order
     * is not important, an ordered collection is not needed. HashSet is
     * fast for add and lookup, if configured properly.
     */
        Set<Vertex> visited = new HashSet<>();
        visited.add(current);

        //Search.
        while (!queue.isEmpty()) {
            current = queue.remove();
            if (current.name.equals(finish.name)) {
                System.out.println("when do we get here?   " + current);
                break;
            } else {
                if (current.adjacencies != null) {
                for (Vertex nextNode : current.adjacencies) {
                        if (!visited.contains(nextNode)) {
                            queue.add(nextNode);
                            visited.add(nextNode);

                            //Look up of next node instead of previous.
                            nextNodeMap.put(current, nextNode);
                        }
                    }
                }
            }
        }

        //Reconstruct path. No need to reverse.

        for (Vertex node = start; node != null; node = nextNodeMap.get(node)) {
            directions.add(node);
        }

        System.out.println("before return   "  + nextNodeMap.toString());

        return directions;
    }

    private static boolean containsName(List<Vertex> list, String name) {
        for (Vertex v : list) {
            if (v.getName().equals(name)) {
                return true;
            }
        }
        return false;
    }
}

class Vertex implements Comparable<Vertex> {
    public final String name;
    public Vertex[] adjacencies;
    public double minDistance = Double.POSITIVE_INFINITY;

    public Vertex(String argName) {
        name = argName;
    }

    public String toString() {
        return name;
    }

    public int compareTo(Vertex other) {
        return Double.compare(minDistance, other.minDistance);
    }

    public String getName() {
        return name;
    }
}
