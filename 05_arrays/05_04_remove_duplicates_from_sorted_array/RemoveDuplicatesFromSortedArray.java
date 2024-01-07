public class RemoveDuplicatesFromSortedArray {
    public static void main(String[] args) {
        int[] nums = new int[] {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
        System.out.println("Elements:-");
        for (int i : nums) {
            System.out.print(i + " ");
        }
        System.out.println();
        int nonDuplicates = removeDuplicates(nums);
        System.out.println("Non-duplicates: " + nonDuplicates);
        System.out.println("Elements:-");
        for (int i = 0; i < nonDuplicates; i++) {
            System.out.print(i + " ");
        }
    }

    private static int removeDuplicates(int[] nums) {
        int j = 1;
        for (int i = 1; i < nums.length; i++) {
            if (nums[i] != nums[i-1]) {
                nums[j++] = nums[i];
            }
        }

        return j;
    }
}
