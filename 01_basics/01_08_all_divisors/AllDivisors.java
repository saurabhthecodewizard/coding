public class AllDivisors {
    public static void main(String[] args) {
        int num = 36;
        printAllDivisors(num);
    }

    private static void printAllDivisors(int n) {
        System.out.print("All divisors of " + n + " are: ");
        for (int i = 1; i < Math.sqrt(n) + 1; i++) {
            if (n % i == 0) {
                System.out.print(i + " ");
                if (i != n / i) {
                    System.out.print(n / i + " ");
                }
            }
        }
    }
}
