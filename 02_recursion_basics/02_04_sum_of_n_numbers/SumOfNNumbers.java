public class SumOfNNumbers {
    public static void main(String[] args) {
        int num = 5;
        System.out.println(String.format("Sum of first %d numbers is: %d", num, totalSum(num, 0)));
    }

    private static int totalSum(int i, int sum) {
        if (i < 1) {
            return sum;
        }

        return totalSum(i - 1, sum + i);
    }
}
