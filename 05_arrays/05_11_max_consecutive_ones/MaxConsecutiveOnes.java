public class MaxConsecutiveOnes {

    public static void main(String[] args) {
        int[] nums = {1, 1, 0, 1, 1, 1};

        System.out.println("Elements:-");
        for (int num : nums) {
            System.out.print(num + " ");
        }
        System.out.println();

        System.out.println("The maximum consecutive 1's are: " + maxConsecutiveOnes(nums));
    }
    
    private static int maxConsecutiveOnes(int arr[]) {
        int count = 0;
        int maxCount = 0;

        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == 1) {
                count++;
            } else {
                maxCount = Math.max(maxCount, count);
                count = 0;
            }
        }

        return Math.max(maxCount, count);
    }
}
