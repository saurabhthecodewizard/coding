import java.util.Arrays;

public class MaximumSubarray {
    public static void main(String[] args) {
        int[] arr = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };
        System.out.println("Before sorting:");
        System.out.println(Arrays.toString(arr));
        int result = maximumSubarray(arr);
        System.out.println("The maximum subarray sum is: " + result);
    }

    private static Integer maximumSubarray(int[] arr) {
        int result = Integer.MIN_VALUE;
        int sum = 0;

        for (int i : arr) {
            sum += i;
            result = Math.max(result, sum);
            if (sum < 0) {
                sum = 0;
            }
        }

        return result;
    }
}