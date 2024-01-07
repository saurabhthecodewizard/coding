public class SelectionSort {
    public static void main(String[] args) {
        int arr[] = {13, 46, 24, 52, 20, 9};
        System.out.println("Before:-");
        print(arr);
        selectionSort(arr);
        System.out.println("After:-");
        print(arr);
    }

    private static void selectionSort(int arr[]) {
        for (int i = 0; i < arr.length - 1; i++) {
            for (int j = i + 1; j < arr.length; j++) {
                if (arr[j] < arr[i]) {
                    swap(arr, i, j);
                }
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
