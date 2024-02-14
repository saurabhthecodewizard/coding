public class SearchInsertPosition {
    public static void main(String[] args) {
        // Test Case 1: Target found in the middle
        int[] arr1 = { 1, 3, 5, 6 };
        int target1 = 5;
        System.out.println("Test Case 1:");
        printArray(arr1);
        System.out.println("Insert Position for " + target1 + ": " + searchInsert(arr1, target1)); // Output should be 2

        // Test Case 2: Target found at the beginning
        int[] arr2 = { 1, 3, 5, 6 };
        int target2 = 2;
        System.out.println("\nTest Case 2:");
        printArray(arr2);
        System.out.println("Insert Position for " + target2 + ": " + searchInsert(arr2, target2)); // Output should be 1

        // Test Case 3: Target found at the end
        int[] arr3 = { 1, 3, 5, 6 };
        int target3 = 7;
        System.out.println("\nTest Case 3:");
        printArray(arr3);
        System.out.println("Insert Position for " + target3 + ": " + searchInsert(arr3, target3)); // Output should be 4

        // Test Case 4: Target not found
        int[] arr4 = { 1, 3, 5, 6 };
        int target4 = 0;
        System.out.println("\nTest Case 4:");
        printArray(arr4);
        System.out.println("Insert Position for " + target4 + ": " + searchInsert(arr4, target4)); // Output should be 0
    }

    public static int searchInsert(int[] nums, int target) {
        int low = 0;
        int high = nums.length - 1;
        int result = nums.length;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] >= target) {
                result = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return result;
    }

    private static void printArray(int[] arr) {
        System.out.print("Array: [");
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i]);
            if (i < arr.length - 1) {
                System.out.print(", ");
            }
        }
        System.out.println("]");
    }
}
