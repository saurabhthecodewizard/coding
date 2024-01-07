public class MoveZeroes {
    public static void main(String[] args) {
        int[] nums = new int[] {0, 1, 0, 3, 12};

        System.out.println("Elements:-");
        print(nums);
        moveZeroes(nums);
        System.out.println("Zeroes moved:-");
        print(nums);
    }

    private static void moveZeroes(int nums[]) {
        int j = 0;
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] != 0) {
                swap(nums, j++, i);
            }
        }
    }

    private static void swap(int[] arr, int a, int b) {
        int temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
    }

    private static void print(int[] arr) {
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}
