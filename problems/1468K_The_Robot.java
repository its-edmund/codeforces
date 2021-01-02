package problems;

import java.util.Scanner;
import java.awt.Point;
import java.util.HashMap;
import java.util.ArrayList;

class Main {
    public static void main(String[] args) {
        HashMap<Character, Point> moveSet = new HashMap<>();
        moveSet.put('L', new Point(-1, 0));
        moveSet.put('R', new Point(1, 0));
        moveSet.put('U', new Point(0, 1));
        moveSet.put('D', new Point(0, -1));
        Scanner in = new Scanner(System.in);
        int i = in.nextInt();
        in.nextLine();
        while(i != 0) {
            String moves = in.nextLine();
            Point currLoc = new Point(0,0);
            ArrayList<Point> locations = new ArrayList<>();
            for(int k = 0; k < moves.length(); k++) {
                char move = moves.charAt(k);
                currLoc = Translate(currLoc, moveSet.get(move));
                locations.add(currLoc);
            }
            boolean foundLoc = false;
            for(Point location : locations) {
                Point robotPos = new Point(0,0);
                Point newPos;
                for(int k = 0; k < moves.length(); k++) {
                    char move = moves.charAt(k);
                    newPos = Translate(robotPos, moveSet.get(move));
                    if(!newPos.equals(location)) {
                        robotPos = newPos;
                    }
                }
                if(robotPos.getX() == 0 && robotPos.getY() == 0) {
                    System.out.println((int) location.getX() + " " + (int) location.getY());
                    foundLoc = true;
                    break;
                }
            }
            if(!foundLoc) {
                System.out.println(0 + " " + 0);
                foundLoc = false;
            }
            i--;
        }
    }

    static Point Translate(Point p1, Point p2) {
        return new Point((int) (p1.getX() + p2.getX()), (int) (p1.getY() + p2.getY()));
    }
}