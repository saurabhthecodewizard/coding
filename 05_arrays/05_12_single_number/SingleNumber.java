public class SingleNumber {
    public static void main(String[] args) {
        int[] arr = {4, 1, 2, 1, 2};

        System.out.println("Elements:-");
        for (int num : arr) {
            System.out.print(num + " ");
        }
        System.out.println();

        int result = singleNumber(arr);
        System.out.println("The single element is: " + result);
    }
    
    private static int singleNumber(int arr[]) {
        int xor = 0;
        for (int i : arr) {
            xor ^= i;
        }
        return xor;
    }
}
