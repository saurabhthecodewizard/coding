import java.util.HashMap;
import java.util.Map;

public class CountFrequencyOfElements {
    public static void main(String[] args) {
        Map<Integer, Integer> map = new HashMap<>();
        int arr[] = { 10, 5, 10, 15, 10, 5 };
        int n = arr.length;

        countFrequencyOfElements(arr, n, map);

        for (Map.Entry<Integer, Integer> entry : map.entrySet()) {
            System.out.println(entry.getKey() + "-> " + entry.getValue());
        }
    }

    private static void countFrequencyOfElements(int arr[], int n, Map<Integer, Integer> map) {
        for (int i = 0; i < n; i++) {
            if (map.containsKey(arr[i])) {
                map.put(arr[i], map.get(arr[i]) + 1);
            } else {
                map.put(arr[i], 1);
            }
        }
    }
}
