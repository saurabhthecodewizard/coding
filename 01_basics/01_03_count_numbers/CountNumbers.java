public class CountNumbers {
    public static void main(String[] args) {
        int num = 12345;

        System.out.println("Number of digits in " + num + " is: " + countDigits(num));
    }
    private static int countDigits(int n) {
        int x = n;
        int count = 0;
        
        while (x != 0) {
            x = x / 10;
            count++;
        }
        return count;
    }
}
