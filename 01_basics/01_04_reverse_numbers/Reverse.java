
public class Reverse {
    public static void main(String[] args) {
        int n = 23456;
        System.out.println("Reverse of number " + n + " is " + reverse(n));
    }

    private static int reverse(int n) {
        int num = n;
        int reverse = 0;

        while (num > 0) {
            reverse = reverse * 10 + (num % 10);
            num /= 10;
        }

        return reverse;
    }
}
