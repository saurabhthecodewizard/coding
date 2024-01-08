import java.util.Arrays;

public class MajorityElement {
    public static void main(String args[]) {
        int[] arr = {2, 2, 1, 1, 1, 2, 2};
        System.out.println("Elements: " + Arrays.toString(arr));
        int ans = majorityElement(arr);
        System.out.println("The majority element is: " + ans);

    }
    
    private static int majorityElement(int nums[]) {
        int count = 1;
        int element = nums[0];

        for (int i = 0; i < nums.length; i++) {
            if (count == 0) {
                count++;
                element = nums[i];
            } else if (element == nums[i]) {
                count++;
            } else {
                count--;
            }
        }

        return element;
    }
}
