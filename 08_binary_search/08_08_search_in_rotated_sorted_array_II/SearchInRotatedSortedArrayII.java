import java.util.Arrays;

public class SearchInRotatedSortedArrayII {
    public static void main(String[] args) {
        // Test Case 1
        int[] nums1 = { 2, 5, 6, 0, 0, 1, 2 };
        int target1 = 0;
        System.out.println("Test Case 1 - Array: " + Arrays.toString(nums1));
        System.out.println("Target: " + target1);
        System.out.println("Result: " + search(nums1, target1));

        // Test Case 2
        int[] nums2 = { 2, 5, 6, 0, 0, 1, 2 };
        int target2 = 3;
        System.out.println("\nTest Case 2 - Array: " + Arrays.toString(nums2));
        System.out.println("Target: " + target2);
        System.out.println("Result: " + search(nums2, target2));

        // Test Case 3
        int[] nums3 = { 1, 1, 1, 3, 1 };
        int target3 = 3;
        System.out.println("\nTest Case 3 - Array: " + Arrays.toString(nums3));
        System.out.println("Target: " + target3);
        System.out.println("Result: " + search(nums3, target3));

        // Test Case 4
        int[] nums4 = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1 };
        int target4 = 0;
        System.out.println("\nTest Case 4 - Array: " + Arrays.toString(nums4));
        System.out.println("Target: " + target4);
        System.out.println("Result: " + search(nums4, target4));
    }

    public static boolean search(int[] nums, int target) {
        int low = 0;
        int high = nums.length - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                return true;
            }
            if (nums[low] == nums[mid] && nums[mid] == nums[high]) {
                low++;
                high--;
            } else if (nums[low] <= nums[mid]) {
                if (nums[low] <= target && target <= nums[mid]) {
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            } else {
                if (nums[mid] <= target && target <= nums[high]) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
        }
        return false;
    }
}
