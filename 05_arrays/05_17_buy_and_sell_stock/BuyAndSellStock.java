import java.util.Arrays;

public class BuyAndSellStock {
    public static void main(String[] args) {
        int[] arr = {7, 1, 5, 3, 6, 4};
        System.out.println("Values:");
        System.out.println(Arrays.toString(arr));
        int result = maxProfit(arr);
        System.out.println("The maximum profit is: " + result);
    }

    private static int maxProfit(int[] arr) {
        if (arr.length == 0) {
            return 0;
        }

        int profit = 0;
        int min = arr[0];

        for (int i = 1; i < arr.length; i++) {
            int currentProfit = arr[i] - min;
            profit = Math.max(profit, currentProfit);
            min = Math.min(min, arr[i]);
        }

        return profit;
    }
}
