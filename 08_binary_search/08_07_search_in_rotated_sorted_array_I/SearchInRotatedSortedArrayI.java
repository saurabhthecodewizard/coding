import java.util.Arrays;

public class SearchInRotatedSortedArrayI {
    public static void main(String[] args) {
        // Test Case 1
        int[] nums1 = { 4, 5, 6, 7, 0, 1, 2 };
        int target1 = 0;
        System.out.println("Test Case 1 - Array: " + Arrays.toString(nums1));
        System.out.println("Target: " + target1);
        System.out.println("Index: " + search(nums1, target1));

        // Test Case 2
        int[] nums2 = { 4, 5, 6, 7, 0, 1, 2 };
        int target2 = 3;
        System.out.println("\nTest Case 2 - Array: " + Arrays.toString(nums2));
        System.out.println("Target: " + target2);
        System.out.println("Index: " + search(nums2, target2));

        // Test Case 3
        int[] nums3 = { 1 };
        int target3 = 0;
        System.out.println("\nTest Case 3 - Array: " + Arrays.toString(nums3));
        System.out.println("Target: " + target3);
        System.out.println("Index: " + search(nums3, target3));

        // Test Case 4
        int[] nums4 = { 4, 5, 6, 7, 8, 1, 2, 3 };
        int target4 = 8;
        System.out.println("\nTest Case 4 - Array: " + Arrays.toString(nums4));
        System.out.println("Target: " + target4);
        System.out.println("Index: " + search(nums4, target4));
    }

    public static int search(int[] nums, int target) {
        int low = 0;
        int high = nums.length - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                return mid;
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
        return -1;
    }
}
