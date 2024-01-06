public class ReverseArray {
    public static void main(String[] args) {
        int arr[] = {1, 2, 3, 4, 5, 6};

        System.out.println("Before:-");
        for (int i : arr) {
            System.out.print(i + " ");
        }
        
        reverseArray(0, arr.length - 1, arr);
        System.out.println();

        System.out.println("After:-");
        for (int i : arr) {
            System.out.print(i + " ");
        }
    }

    private static void reverseArray(int start, int end, int arr[]) {
        if (start < end) {
            int temp = arr[end];
            arr[end] = arr[start];
            arr[start] = temp;
            reverseArray(start + 1, end - 1, arr);
        }
    }
}
