public class Fibonacci {
    public static void main(String[] args) {
        int num = 7;
        System.out.println(String.format("Fibonacci for %d: %d", num, fibonacci(num)));
    }

    private static int fibonacci(int n) {
        if (n <= 1) {
            return n;
        }
        int a = 0;
        int b = 1;

        int temp = n;

        while (temp-- > 1) {
            int sum = a + b;
            a = b;
            b = sum;
        }

        return b;
    }
}
