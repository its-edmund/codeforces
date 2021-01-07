package problems;

import java.util.ArrayList;
import java.util.Scanner;
import java.util.Collections;
import java.util.HashMap;
import java.awt.Point;

public class Q455A_Boredom {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        in.nextLine();

        HashMap<Integer, Integer> a = new HashMap<>();

        while(n != 0) {
            int next = in.nextInt();
            a.put(next, a.getOrDefault(next, 0) + 1);
            n--;
        }
        
        ArrayList<Point> freqMap = new ArrayList<>();
        int[] f = new int[111111];

        for(Integer key : a.keySet()) {
            freqMap.add(new Point(key, a.get(key)));
        }

        for(int i = 0; i < a.size(); i++) {
            int pr = i - 1;
            while(pr >0 && freqMap.get(pr).getX() + 1 == freqMap.get(i).getX()) {
                pr--;
            }
            if(pr == -1) {
                f[i] = (int) (freqMap.get(i).getX() * freqMap.get(i).getY());
            } else {
                f[i] = f[pr] + (int) (freqMap.get(i).getX() * freqMap.get(i).getY());
            }
            if(i != 0) {
                f[i] = Math.max(f[i], f[i - 1]);
            }
        }
        System.out.println(f[freqMap.size() - 1]);
    }
}
