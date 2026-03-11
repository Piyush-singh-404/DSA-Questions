import java.util.*;
public class FindFactor {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        if(n == 0) {
            System.out.println("No Factors");
            return;
        }

        n = Math.abs(n);

        for(int i = 1; i <= n; i++) {
            if(n % i == 0) {
                if(i == n)
                    System.out.print(i);
                else
                    System.out.print(i + ",");
            }
        }
    }
}
