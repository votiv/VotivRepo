package katas.first.batch;

/**
 * Created by viskyo on 18/08/2015.
 */
public class Kata18 {

    public static void main(String[] args) {

        int[][] teams = new int[][]{{1, 2, 3, 4, 5}, {5, 2, 3, 4, 5}};
        System.out.println(tugOWar(teams));
    }

    public static String tugOWar(final int[][] teams) {

        int[] aTeam = teams[0];
        int[] bTeam = teams[1];
        int aStrength = 0;
        int bStrength = 0;

        for (int i = 0; i < aTeam.length; i++) {

            aStrength += aTeam[i];
            bStrength += bTeam[i];
        }

        if (aStrength == bStrength) {

            int aAnchor = aTeam[0];
            int bAnchor = bTeam[bTeam.length - 1];
            if (aAnchor == bAnchor) return "It's a tie!";
            else return aAnchor > bAnchor ? "Team 1 wins!" : "Team 2 wins!";
        }

        return aStrength > bStrength ? "Team 1 wins!" : "Team 2 wins!";
    }
}
