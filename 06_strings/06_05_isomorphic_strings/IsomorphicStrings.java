import java.util.HashMap;
import java.util.Map;

public class IsomorphicStrings {
    public static void main(String[] args) {
        // Test case 1: Basic example
        System.out.println("Test Case 1: " + isIsomorphic("egg", "add"));

        // Test case 2: Characters in s map to same character in t
        System.out.println("Test Case 2: " + isIsomorphic("foo", "bar"));

        // Test case 3: Isomorphic strings
        System.out.println("Test Case 3: " + isIsomorphic("paper", "title"));
    }

    private static boolean isIsomorphic(String s, String t) {
        if (s.length() != t.length()) {
            return false;
        }
        Map<Character, Character> sMap = new HashMap<>();
        Map<Character, Character> tMap = new HashMap<>();
        for (int i = 0; i < s.length(); i++) {
            if (!sMap.containsKey(s.charAt(i)) && !tMap.containsKey(t.charAt(i))) {
                sMap.put(s.charAt(i), t.charAt(i));
                tMap.put(t.charAt(i), s.charAt(i));
            } else if (sMap.get(s.charAt(i)) != t.charAt(i) || tMap.get(t.charAt(i)) != s.charAt(i)) {
                return false;
            }
        }
        return true;
    }
}
