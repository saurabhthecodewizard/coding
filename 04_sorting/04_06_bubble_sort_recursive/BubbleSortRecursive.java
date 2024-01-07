public class BubbleSortRecursive {
    public static void main(String[] args) {
        int arr[] = { 13, 46, 24, 52, 20, 9 };
        System.out.println("Before:-");
        print(arr);
        bubbleSortRecursive(arr, arr.length);
        System.out.println();
        System.out.println("After:-");
        print(arr);
    }

    private static void bubbleSortRecursive(int arr[], int n) {
        if (n == 1) {
            return;
        }

        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                swap(arr, i+1, i);
            }
        }

        bubbleSortRecursive(arr, n-1);
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
