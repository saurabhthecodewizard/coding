public class Factorial {
    public static void main(String[] args) {
        int num = 5;
        System.out.println(String.format("Factorial of %d: %d", num, factorial(num)));
    }

    private static int factorial(int n) {
        if (n == 0) {
            return 1;
        }

        return n * factorial(n - 1);
    }
}
