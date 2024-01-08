import java.util.HashMap;
import java.util.Map;

public class TwoSum {
    public static void main(String[] args) {
        int[] arr = {2, 6, 5, 8, 11};
        int target = 14;

        System.out.println("Elements:-");
        for (int num : arr) {
            System.out.print(num + " ");
        }
        System.out.println();

        System.out.println("Target: " + target);

        int[] result = twoSum(arr, target);
        System.out.println("This is the answer for variant 2: [" + result[0] + ", " + result[1] + "]");
    }
    
    private static int[] twoSum(int[] arr, int target) {
        Map<Integer, Integer> numMap = new HashMap<>();

        for (int i = 0; i < arr.length; i++) {
            int complement = target - arr[i];
            if (numMap.containsKey(complement)) {
                return new int[]{numMap.get(complement), i};
            }
            numMap.put(arr[i], i);
        }
        
        return new int[] { -1, -1 };
    }
}
