import java.util.HashMap;
import java.util.Map;
import java.util.PriorityQueue;

public class SortingCharacyersByFrequency {
    public static void main(String[] args) {
        // Test cases
        String result1 = frequencySort("tree");
        System.out.println("Output for 'tree': " + result1); // Output: "eetr" or "eert"

        String result2 = frequencySort("cccaaa");
        System.out.println("Output for 'cccaaa': " + result2); // Output: "aaaccc" or "cccaaa"

        String result3 = frequencySort("Aabb");
        System.out.println("Output for 'Aabb': " + result3); // Output: "bbAa" or "bbaA"
    }

    private static String frequencySort(String s) {
        Map<Character, Integer> map = new HashMap<>();
        for (char ch : s.toCharArray()) {
            map.put(ch, map.getOrDefault(ch, 0) + 1);
        }

        PriorityQueue<Character> queue = new PriorityQueue<>((a, b) -> map.get(b) - map.get(a));
        queue.addAll(map.keySet());

        StringBuilder sb = new StringBuilder();
        while (!queue.isEmpty()) {
            char currentChar = queue.poll();
            int currentCharFrequency = map.get(currentChar);
            for (int i = 0; i < currentCharFrequency; i++) {
                sb.append(currentChar);
            }
        }

        return sb.toString();
    }
}