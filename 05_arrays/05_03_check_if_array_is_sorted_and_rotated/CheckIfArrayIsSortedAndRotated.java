public class CheckIfArrayIsSortedAndRotated {
    public static void main(String[] args) {
        int[] arr = new int[] {3, 4, 5, 1, 2};

        System.out.println("Elements:-");
        for (int i : arr) {
            System.out.print(i + " ");
        }
        System.out.println();

        System.out.println("Is Sorted and Rotated: "+ arrayIsSortedAndRotated(arr));
    }

    private static boolean arrayIsSortedAndRotated(int arr[]) {
        int count = 0;

        for (int i = 1; i < arr.length; i++) {
            if (arr[i-1] > arr[i]) {
                count++;
            }
        }

        if (arr[0] < arr[arr.length - 1]) {
            count++;
        }

        return count <= 1;
    }
}
