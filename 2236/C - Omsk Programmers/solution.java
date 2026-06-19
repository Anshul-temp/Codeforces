import java.util.*;
 
public class Main {
 
    static class FastReader {
        private final Scanner sc = new Scanner(System.in);
 
        int nextInt() {
            return sc.nextInt();
        }
    }
 
    public static void main(String[] args) {
        FastReader sc = new FastReader();
        int t = sc.nextInt();
 
        while (t-- > 0) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            int x = sc.nextInt();
 
            if (a == b) {
                System.out.println(0);
                continue;
            }
 
            if (a > b) {
                a += b;
                b = a - b;
                a -= b;
            }
 
            int j = 0;
            int p = b;
            int out = b - a;
 
            while (j < out) {
 
                if (a == b) {
                    System.out.println(0);
                    continue;
                }
 
                if (a > b) {
                    a += b;
                    b = a - b;
                    a -= b;
                }
 
                while (b > a) {
                    p = b;
                    j++;
                    b /= x;
                }
 
                out = Math.min(
                    out,
                    Math.min(
                        p - a + j - 1,
                        a - b + j
                    )
                );
            }
 
            System.out.println(out);
        }
    }
}