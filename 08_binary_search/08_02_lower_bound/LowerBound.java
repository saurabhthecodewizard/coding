public class LowerBound {
    public static void main(String[] args) {
        // Test Case 1: Target found in the middle
        int[] arr1 = { 1, 2, 2, 2, 3, 4, 5 };
        int target1 = 2;
        System.out.println("Test Case 1:");
        printArray(arr1);
        System.out.println("Lower Bound of " + target1 + ": " + lowerBound(arr1, target1)); // Output should be 1

        // Test Case 2: Target found at the beginning
        int[] arr2 = { 5, 10, 10, 15, 20 };
        int target2 = 5;
        System.out.println("\nTest Case 2:");
        printArray(arr2);
        System.out.println("Lower Bound of " + target2 + ": " + lowerBound(arr2, target2)); // Output should be 0

        // Test Case 3: Target found at the end
        int[] arr3 = { 10, 20, 30, 40, 50 };
        int target3 = 50;
        System.out.println("\nTest Case 3:");
        printArray(arr3);
        System.out.println("Lower Bound of " + target3 + ": " + lowerBound(arr3, target3)); // Output should be 4

        // Test Case 4: Target not found
        int[] arr4 = { 5, 10, 15, 20, 25 };
        int target4 = 12;
        System.out.println("\nTest Case 4:");
        printArray(arr4);
        System.out.println("Lower Bound of " + target4 + ": " + lowerBound(arr4, target4)); // Output should be 3
    }

    private static int lowerBound(int[] arr, int target) {
        int low = 0;
        int high = arr.length - 1;
        int result = high;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] >= target) {
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
