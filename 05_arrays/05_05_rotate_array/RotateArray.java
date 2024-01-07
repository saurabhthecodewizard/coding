public class RotateArray {
    public static void main(String[] args) {
        int[] nums = new int[]{1, 2, 3, 4, 5, 6, 7};
        int k = 3;
        System.out.println("Elements:-");
        print(nums);
        rotate(nums, k);
        System.out.println("Rotated by " + k + ":-");
        print(nums);
    }

    private static void rotate(int[] nums, int k) {
        int limit = k % nums.length;
        if (k < 0) {
            k = k + nums.length;
        }

        reverse(nums, 0, limit - 1);
        reverse(nums, nums.length - limit, nums.length - 1);
        reverse(nums, 0, nums.length - 1);
    }

    private static void reverse(int[] nums, int low, int high) {
        int i = low;
        int j = high;
        while (i < j) {
            swap(nums, i++, j--);
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
        System.out.println();
    }
}
