public class FindMax {
    public static void main(String[] args) {
        int[] arr = { 2, 5, 1, 3, 0 };

        System.out.println("Elements:-");
        for (int i : arr) {
            System.out.print(i + " ");
        }

        System.out.println();
        System.out.println("Max: " + findMax(arr));
    }

    private static int findMax(int arr[]) {
        int max = Integer.MIN_VALUE;

        for (int i = 0; i < arr.length; i++) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }

        return max;
    }
}
