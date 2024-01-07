public class InsertionSortRecursive {
    public static void main(String[] args) {
        int arr[] = { 13, 46, 24, 52, 20, 9 };
        System.out.println("Before:-");
        print(arr);
        insertionSortRecursive(arr, 0);
        System.out.println();
        System.out.println("After:-");
        print(arr);
    }

    private static void insertionSortRecursive(int arr[], int n) {
        if (n >= arr.length) {
            return;
        }
        for (int j = n; j > 0; j--) {
            if (arr[j] < arr[j - 1]) {
                swap(arr, j, j - 1);
            }
        }
        insertionSortRecursive(arr, n + 1);
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
