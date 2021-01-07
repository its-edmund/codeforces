package problems;

import java.util.Comparator;
import java.util.Scanner;
import java.util.ArrayList;
import java.awt.Point;
import java.util.Collections;

public class Q479_Exams {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        in.nextLine();
        ArrayList<Point> schedule = new ArrayList<>();
        while (n != 0) {
            int a = in.nextInt();
            int b = in.nextInt();
            in.nextLine();
            schedule.add(new Point(a, b));
            n--;
        }
        Collections.sort(schedule, new Comparator<Point>() {
            @Override
            public int compare(Point p1, Point p2) {
                return (int) p1.getX() - (int) p2.getX();
            }
        });

        int currExam = -1;
        for (int i = 0; i < schedule.size(); i++) {
            if (currExam <= schedule.get(i).getY()) {
                currExam = (int) schedule.get(i).getY();
            } else {
                currExam = (int) schedule.get(i).getX();
            }
        }

        System.out.println(currExam);
    }
}
