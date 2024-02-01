import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class FourSum {
    public static void main(String[] args) {
        int[] nums1 = { 1, 0, -1, 0, -2, 2 };
        int target1 = 0;
        List<List<Integer>> result1 = fourSum(nums1, target1);
        System.out.println("Example 1:");
        result1.forEach(quadruplet -> System.out.println(quadruplet));

        int[] nums2 = { 2, 2, 2, 2, 2 };
        int target2 = 8;
        List<List<Integer>> result2 = fourSum(nums2, target2);
        System.out.println("\nExample 2:");
        result2.forEach(quadruplet -> System.out.println(quadruplet));
    }

    private static List<List<Integer>> fourSum(int[] nums, int target) {
        int size = nums.length;
        List<List<Integer>> result = new ArrayList<>();
        if (size < 4) {
            return result;
        }
        Arrays.sort(nums);

        for (int i = 0; i < size - 3; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }

            for (int j = i + 1; j < size - 2; j++) {
                if (j > i + 1 && nums[j] == nums[j - 1]) {
                    continue;
                }

                int low = j + 1;
                int high = size - 1;

                while (low < high) {
                    int sum = nums[i] + nums[j] + nums[low] + nums[high];

                    if (sum < target) {
                        low++;
                    } else if (sum > target) {
                        high--;
                    } else {
                        List<Integer> combination = new ArrayList<>();
                        combination.add(nums[i]);
                        combination.add(nums[j]);
                        combination.add(nums[low]);
                        combination.add(nums[high]);

                        result.add(combination);

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
        }

        return result;
    }
}