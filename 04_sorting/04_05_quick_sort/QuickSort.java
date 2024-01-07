public class QuickSort {
    public static void main(String[] args) {
        int arr[] = { 13, 46, 24, 52, 20, 9 };
        System.out.println("Before:-");
        print(arr);
        quickSort(arr, 0, arr.length - 1);
        System.out.println();
        System.out.println("After:-");
        print(arr);
    }

    private static void quickSort(int arr[], int low, int high) {
        if (low >= high) {
            return;
        }

        int j = partition(arr, low, high);
        quickSort(arr, low, j - 1);
        quickSort(arr, j + 1, high);
    }

    private static int partition(int arr[], int low, int high) {
        int i = low + 1;
        int j = high;

        while (true) {
            while (arr[i] < arr[low]) {
                i++;
                if (i >= high) {
                    break;
                }
            }
            while (arr[j] > arr[low]) {
                j--;
                if (j <= low) {
                    break;
                }
            }
            if (i >= j) {
                break;
            }

            swap(arr, i, j);
        }

        swap(arr, low, j);
        return j;
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
