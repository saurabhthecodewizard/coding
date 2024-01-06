public class GCD {
    public static void main(String[] args) {
        int a = 4;
        int b = 8;

        System.out.println(String.format("GCD of %d and %d is %d", a, b, gcd(a, b)));
    }

    private static int gcd(int a, int b) {
        if ( b == 0 ) {
            return a;
        }

        return gcd(b, a%b);
    }
}
