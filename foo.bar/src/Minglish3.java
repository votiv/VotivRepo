import java.util.*;

/**
 * Created by othniel.visky on 09.08.2016.
 */
public class Minglish3 {

    private static String path = "";
    private static List<String> visited = new ArrayList<>();

    public static String answer(String[] words) {

        // Create graph
        List<Edge> graph = createGraph(words);

        // Starting nodes can be only ones which have no incoming edges
        List<String> edges = new ArrayList<>();
        for (Edge n : graph) {
            for (String s : n.getNext()) {
                if (s != null)
                    edges.add(s);
            }
        }

        List<Edge> start = new ArrayList<>();
        for (Edge n : graph) {
            if (!edges.contains(n.getName()))
                start.add(n);
        }

        String letters = "";
        for (Edge e : start) {
            letters += path(graph, e);
        }

        return new StringBuilder(letters).reverse().toString();
    }

    private static String path(List<Edge> graph, Edge edge) {

        List<String> neighbours = edge.getNext();
        for (int i = 0; i < neighbours.size(); i++) {
            String node = neighbours.get(i);
            if (node != null && !visited.contains(node)) {
                if (getEdgeByName(graph, node) != null)
                    path(graph, getEdgeByName(graph, node));
                if (!path.contains(node))
                    path += node;
                visited.add(node);
            }
        }
        if (!path.contains(edge.getName()))
            path += edge.getName();

        return path;
    }

    private static List<Edge> createGraph(String[] s) {

        List<Edge> graph = new ArrayList<>();
        for (int i = 0; i < s.length; i++) {

            try {
                Edge edge = findEdge(s[i], s[i + 1]);
                if (edge != null) {

                    if (!containsName(graph, edge.getName())) {
                        graph.add(edge);
                    } else {
                        Edge updateEdge = getEdgeByName(graph, edge.getName());
                        if (updateEdge != null) {
                            for (String str : edge.getNext()) {
                                if (!updateEdge.getNext().contains(str))
                                    updateEdge.addNext(str);
                            }
                        }
                    }
                }
            } catch (ArrayIndexOutOfBoundsException e) {
            }
        }
        return graph;
    }

    private static Edge findEdge(String a, String b) {

        int len = Math.min(a.length(), b.length());

        for (int i = 0; i < len; i++) {
            if (a.charAt(i) != b.charAt(i)) {
                Edge edge = new Edge(String.valueOf(a.charAt(i)));
                edge.addNext(String.valueOf(b.charAt(i)));
                return edge;
            }
        }
        return null;
    }

    private static boolean containsName(List<Edge> list, String name) {
        for (Edge n : list) {
            if (n.getName().equals(name)) {
                return true;
            }
        }
        return false;
    }

    private static Edge getEdgeByName(List<Edge> list, String name) {
        for (Edge n : list) {
            if (n.getName().equals(name)) {
                return n;
            }
        }
        return null;
    }
}

class Edge {
    private String name;
    private List<String> next = new ArrayList<>();

    Edge(String name) {
        this.name = name;
    }

    String getName() {
        return name;
    }

    List<String> getNext() {
        return next;
    }

    void addNext(String next) {
        this.next.add(next);
    }
}
