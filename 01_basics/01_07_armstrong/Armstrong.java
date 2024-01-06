public class Armstrong {
    public static void main(String[] args) {
        int num = 153;

        System.out.println(String.format("Is %d an Armstrong number: %b", num, armstrong(num)));
    }

    private static boolean armstrong(int num) {
        int temp = num;
        int count = 0;
        int sum = 0;

        while(temp > 0) {
            count++;
            temp /= 10;
        }

        temp = num;
        while (temp > 0) {
            int digit = temp % 10;
            sum += Math.pow(digit, count);
            temp /= 10;
        }

        return sum == num;
    }
}
