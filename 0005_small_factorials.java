import java.util.Scanner;
import java.math.BigInteger;

class Main {
    public static void main(String[] args) throws Exception {
        Scanner scanner = new Scanner(System.in);
        int i = scanner.nextInt();
        while (i > 0) {
            int n = scanner.nextInt();
            System.out.println(getFactorial(n));
            i--;
        }
        scanner.close();
    }

    public static BigInteger getFactorial(int n) {
        BigInteger r = new BigInteger("1");
        for (int i = 2; i <= n; i++) {
            r = r.multiply(BigInteger.valueOf(i));
        }

        return r;
    }
}
