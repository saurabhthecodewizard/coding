import java.util.Arrays;

public class SortColors {
    public static void main(String[] args) {
        int[] arr = {0, 2, 1, 2, 0, 1};
        
        System.out.println("Before sorting: " + Arrays.toString(arr));
        
        sortColors(arr);
        
        System.out.println("After sorting: " + Arrays.toString(arr));
    }
    
    private static void sortColors(int[] arr) {
        int red = 0;
        int white = 0;
        int blue = arr.length - 1;

        while (white <= blue) {
            if (arr[white] == 0) {
                swap(arr, white++, red++);
            } else if (arr[white] == 1) {
                white++;
            } else {
                swap(arr, white, blue--);
            }
        }
    }

    private static void swap(int[] arr, int a, int b) {
        int temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
    }
}
