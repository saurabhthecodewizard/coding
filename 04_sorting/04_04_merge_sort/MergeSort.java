public class MergeSort {
    public static void main(String[] args) {
        int arr[] = { 3, 2, 8, 5, 1, 4, 23 };
        System.out.println("Before:-");
        print(arr);
        mergeSort(arr, 0, arr.length - 1);
        System.out.println();
        System.out.println("After:-");
        print(arr);
    }

    private static void mergeSort(int arr[], int low, int high) {
        if (low >= high) {
            return;
        }

        int mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }

    private static void merge(int arr[], int low, int mid, int high) {
        int[] aux = new int[high - low + 1];
        int left = low;
        int right = mid + 1;
        int auxIndex = 0;

        while (left <= mid && right <= high) {
            if (arr[left] <= arr[right]) {
                aux[auxIndex] = arr[left++];
            } else {
                aux[auxIndex] = arr[right++];
            }
            auxIndex++;
        }

        while (left <= mid) {
            aux[auxIndex++] = arr[left++];
        }

        while (right <= high) {
            aux[auxIndex++] = arr[right++];
        }

        for (int i = low; i <= high; i++) {
            arr[i] = aux[i-low];
        }
    }

    private static void print(int[] arr) {
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}
