public class MissingNumber {
    public static void main(String[] args) {
        int[] nums = { 9, 6, 4, 2, 3, 5, 7, 0, 1 };

        System.out.println("Elements:- ");
        for (int num : nums) {
            System.out.print(num + " ");
        }
        System.out.println();

        int result = missingNumber(nums);
        System.out.println("The missing number is: " + result);
    }

    private static int missingNumber(int arr[]) {
        int xor1 = 0;
        int xor2 = 0;

        for (int i = 0; i < arr.length; i++) {
            xor1 ^= arr[i];
            xor2 ^= (i + 1);
        }

        return xor1 ^ xor2;
    }
}
