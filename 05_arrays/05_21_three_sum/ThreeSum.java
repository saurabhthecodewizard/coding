import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class ThreeSum {
    public static void main(String[] args) {
        int[] arr = {-1, 0, 1, 2, -1, -4};
        System.out.println(threeSum(arr));
    }

    private static List<List<Integer>> threeSum(int[] nums) {
        Arrays.sort(nums);
        List<List<Integer>> result = new ArrayList<>();

        for (int i = 0; i < nums.length - 1; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            int low = i + 1;
            int high = nums.length - 1;
            while (low < high) {
                int sum = nums[i] + nums[low] + nums[high];
                if (sum < 0) {
                    low++;
                } else if (sum > 0) {
                    high--;
                } else {
                    result.add(List.of(nums[i], nums[low], nums[high]));
                    while (low + 1 < high && nums[low] == nums[low + 1]) {
                        low++;
                    }
                    while (high - 1 > low && nums[high] == nums[high - 1]) {
                        high--;
                    }
                    low++;
                    high--;
                }
            }
        }
        return result;
    }
}
