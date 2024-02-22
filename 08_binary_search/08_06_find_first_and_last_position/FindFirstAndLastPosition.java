import java.util.Arrays;

public class FindFirstAndLastPosition {
    public static void main(String[] args) {
        // Test Case 1
        int[] nums1 = { 5, 7, 7, 8, 8, 10 };
        int target1 = 8;
        System.out.println("Test Case 1 - Array: " + Arrays.toString(nums1));
        System.out.println("Target: " + target1);
        System.out.println("Result: " + Arrays.toString(searchRange(nums1, target1)));

        // Test Case 2
        int[] nums2 = { 5, 7, 7, 8, 8, 10 };
        int target2 = 6;
        System.out.println("\nTest Case 2 - Array: " + Arrays.toString(nums2));
        System.out.println("Target: " + target2);
        System.out.println("Result: " + Arrays.toString(searchRange(nums2, target2)));

        // Test Case 3
        int[] nums3 = { 1 };
        int target3 = 1;
        System.out.println("\nTest Case 3 - Array: " + Arrays.toString(nums3));
        System.out.println("Target: " + target3);
        System.out.println("Result: " + Arrays.toString(searchRange(nums3, target3)));

        // Test Case 4
        int[] nums4 = { 2, 2 };
        int target4 = 2;
        System.out.println("\nTest Case 4 - Array: " + Arrays.toString(nums4));
        System.out.println("Target: " + target4);
        System.out.println("Result: " + Arrays.toString(searchRange(nums4, target4)));
    }

    public static int[] searchRange(int[] nums, int target) {
        int[] result = new int[] { -1, -1 };
        int low = 0;
        int high = nums.length - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] >= target) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }

            if (target == nums[mid]) {
                result[0] = mid;
            }
        }

        low = 0;
        high = nums.length - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] <= target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }

            if (target == nums[mid]) {
                result[1] = mid;
            }
        }

        return result;
    }
}
