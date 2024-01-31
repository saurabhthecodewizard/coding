import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class MajorityElementII {
    public static void main(String[] args) {
        int[] arr = { 11, 33, 33, 33, 22, 11, 11, 22 };
        System.out.println(majorityElement(arr));
    }

    private static List<Integer> majorityElement(int[] arr) {
        List<Integer> result = new ArrayList<>();
        Map<Integer, Integer> map = new HashMap<>();
        int threshold = arr.length / 3;

        for (int value : arr) {
            map.put(value, map.getOrDefault(value, 0) + 1);
        }

        for (Map.Entry<Integer, Integer> entry : map.entrySet()) {
            if (entry.getValue() > threshold) {
                result.add(entry.getKey());
            }
        }

        return result;
    }
}
