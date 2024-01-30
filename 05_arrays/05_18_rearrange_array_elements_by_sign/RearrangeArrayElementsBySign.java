import java.util.Arrays;

public class RearrangeArrayElementsBySign {
    public static void main(String[] args) {
        int[] arr = { 3, 1, -2, -5, 2, -4 };
        System.out.println("Values:");
        System.out.println(Arrays.toString(arr));
        int[] result = rearrangeBySign(arr);
        System.out.println("Rearranged Values:");
        System.out.println(Arrays.toString(result));
    }

    private static int[] rearrangeBySign(int[] arr) {
        int length = arr.length;
        int[] result = new int[length];

        int positive = 0;
        int negative = 1;

        for (int i = 0; i < length; i++) {
            if (arr[i] < 0) {
                result[negative] = arr[i];
                negative += 2;
            } else {
                result[positive] = arr[i];
                positive += 2;
            }
        }

        return result;
    }
}
