public class BinarySearch {
    public static void main(String[] args) {
        // Test Case 1: Target found in the middle
        int[] arr1 = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
        int target1 = 5;
        System.out.println("Test Case 1:");
        printArray(arr1);
        System.out.println("Index of " + target1 + ": " + search(arr1, target1)); // Output should be 4

        // Test Case 2: Target found at the beginning
        int[] arr2 = { 10, 20, 30, 40, 50 };
        int target2 = 10;
        System.out.println("\nTest Case 2:");
        printArray(arr2);
        System.out.println("Index of " + target2 + ": " + search(arr2, target2)); // Output should be 0

        // Test Case 3: Target found at the end
        int[] arr3 = { 100, 200, 300, 400, 500 };
        int target3 = 500;
        System.out.println("\nTest Case 3:");
        printArray(arr3);
        System.out.println("Index of " + target3 + ": " + search(arr3, target3)); // Output should be 4

        // Test Case 4: Target not found
        int[] arr4 = { 5, 10, 15, 20, 25 };
        int target4 = 12;
        System.out.println("\nTest Case 4:");
        printArray(arr4);
        System.out.println("Index of " + target4 + ": " + search(arr4, target4)); // Output should be -1
    }

    private static int search(int[] arr, int target) {
        int low = 0;
        int high = arr.length - 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (arr[mid] == target) {
                return mid;
            } else if (arr[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return -1;
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