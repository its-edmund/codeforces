package problems;

import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class Q1462C_Unique_Number {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        in.nextLine();
        while(t != 0) {
            int x = in.nextInt();
            in.nextLine();
            boolean foundI = false;
            for(int i = 0; i <= x; i++) {
                if(sumOfDigits(i) == x && digitsAreUnique(i)) {
                    System.out.println(i);
                    foundI = true;
                    break;
                }
            }
            if(!foundI) {
                System.out.println(-1);
                foundI = false;
            }
            t--;
        }
    }

    public static int sumOfDigits(int num) {
        int sum = 0;
        while(num != 0) {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }

    public static boolean digitsAreUnique(int num) {
        Set<Integer> digits = new HashSet<>();
        while(num != 0) {
            digits.add(num % 10);
            num /= 10;
        }
        return digits.size() == Integer.toString(num).length();
    }
}
