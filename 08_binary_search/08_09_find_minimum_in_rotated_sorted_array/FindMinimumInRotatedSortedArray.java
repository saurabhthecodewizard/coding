import java.util.Arrays;

public class FindMinimumInRotatedSortedArray {
    public static void main(String[] args) {
        // Test Case 1
        int[] nums1 = { 3, 4, 5, 1, 2 };
        System.out.println("Test Case 1 - Array: " + Arrays.toString(nums1));
        System.out.println("Minimum Element: " + findMin(nums1));

        // Test Case 2
        int[] nums2 = { 4, 5, 6, 7, 0, 1, 2 };
        System.out.println("\nTest Case 2 - Array: " + Arrays.toString(nums2));
        System.out.println("Minimum Element: " + findMin(nums2));

        // Test Case 3
        int[] nums3 = { 11, 13, 15, 17 };
        System.out.println("\nTest Case 3 - Array: " + Arrays.toString(nums3));
        System.out.println("Minimum Element: " + findMin(nums3));

        // Test Case 4
        int[] nums4 = { 5, 5, 5, 5, 5 };
        System.out.println("\nTest Case 4 - Array: " + Arrays.toString(nums4));
        System.out.println("Minimum Element: " + findMin(nums4));
    }

    public static int findMin(int[] nums) {
        int low = 0;
        int high = nums.length - 1;
        int result = Integer.MAX_VALUE;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[low] <= nums[mid]) {
                result = Math.min(result, nums[low]);
                low = mid + 1;
            } else {
                result = Math.min(result, nums[mid]);
                high = mid - 1;
            }
        }
        return result;
    }
}
