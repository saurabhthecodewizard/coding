import java.util.Arrays;

public class FloorAndCeil {
    public static void main(String[] args) {
        // Test Case 1
        int[] arr1 = { 1, 2, 8, 10, 10, 12, 19 };
        int target1 = 5;
        System.out.println("Test Case 1 - Array: " + Arrays.toString(arr1));
        System.out.println("Floor of " + target1 + ": " + FloorAndCeil.findFloor(arr1, target1));
        System.out.println("Ceil of " + target1 + ": " + FloorAndCeil.findCeil(arr1, target1));

        // Test Case 2
        int[] arr2 = { 1, 2, 8, 10, 10, 12, 19 };
        int target2 = 20;
        System.out.println("\nTest Case 2 - Array: " + Arrays.toString(arr2));
        System.out.println("Floor of " + target2 + ": " + FloorAndCeil.findFloor(arr2, target2));
        System.out.println("Ceil of " + target2 + ": " + FloorAndCeil.findCeil(arr2, target2));

        // Test Case 3
        int[] arr3 = { 1, 2, 8, 10, 10, 12, 19 };
        int target3 = 0;
        System.out.println("\nTest Case 3 - Array: " + Arrays.toString(arr3));
        System.out.println("Floor of " + target3 + ": " + FloorAndCeil.findFloor(arr3, target3));
        System.out.println("Ceil of " + target3 + ": " + FloorAndCeil.findCeil(arr3, target3));

        // Test Case 4
        int[] arr4 = { 1, 2, 8, 10, 10, 12, 19 };
        int target4 = 10;
        System.out.println("\nTest Case 4 - Array: " + Arrays.toString(arr4));
        System.out.println("Floor of " + target4 + ": " + FloorAndCeil.findFloor(arr4, target4));
        System.out.println("Ceil of " + target4 + ": " + FloorAndCeil.findCeil(arr4, target4));
    }

    private static int findFloor(int arr[], int target) {
        int low = 0;
        int high = arr.length - 1;
        int result = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] <= target) {
                result = arr[mid];
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return result;
    }

    private static int findCeil(int arr[], int target) {
        int low = 0;
        int high = arr.length - 1;
        int result = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] >= target) {
                result = arr[mid];
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return result;
    }
}
