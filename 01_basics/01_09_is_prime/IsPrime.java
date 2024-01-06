public class IsPrime {
    public static void main(String[] args) {
        int num = 23;
        System.out.println(String.format("Is %d a prime number: %b", num, isPrime(num)));
    }

    private static boolean isPrime(int n) {
        for (int i = 2; i < Math.sqrt(n); i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }
}
