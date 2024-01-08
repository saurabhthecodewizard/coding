import java.util.ArrayList;
import java.util.List;

public class UnionOfSortedArrays {
    public static void main(String[] args) {
        int[] arr1 = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
        int[] arr2 = { 2, 3, 4, 4, 5, 11, 12 };

        System.out.println("Array 1:-");
        for (int num : arr1) {
            System.out.print(num + " ");
        }
        System.out.println();

        System.out.println("Array 2:-");
        for (int num : arr2) {
            System.out.print(num + " ");
        }
        System.out.println();

        List<Integer> result = findUnion(arr1, arr2);

        System.out.println("Union of arr1 and arr2 is:");
        for (int num : result) {
            System.out.print(num + " ");
        }
    }

    private static List<Integer> findUnion(int arr1[], int arr2[]) {
        int i = 0;
        int j = 0;
        ArrayList<Integer> result = new ArrayList<Integer>();

        while (i < arr1.length && j < arr2.length) {
            if (arr1[i] <= arr2[j]) {
                if (result.size() == 0 || result.get(result.size() - 1) != arr1[i]) {
                    result.add(arr1[i]);
                }
                i++;
            } else {
                if (result.size() == 0 || result.get(result.size() - 1) != arr2[j]) {
                    result.add(arr2[j]);
                }
                j++;
            }
        }

        while (i < arr1.length) {
            if (result.get(result.size() - 1) != arr1[i]) {
                result.add(arr1[i]);
            }
            i++;
        }

        while (j < arr2.length) {
            if (result.get(result.size() - 1) != arr2[j]) {
                result.add(arr2[j]);
            }
            j++;
        }

        return result;
    }
}
