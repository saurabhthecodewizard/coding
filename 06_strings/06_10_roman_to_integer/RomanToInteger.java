import java.util.HashMap;
import java.util.Map;

public class RomanToInteger {
    public static void main(String[] args) {
        // Test cases
        printResult("III");       // Output: III -> 3
        printResult("IV");        // Output: IV -> 4
        printResult("IX");        // Output: IX -> 9
        printResult("LVIII");     // Output: LVIII -> 58
        printResult("MCMXCIV");   // Output: MCMXCIV -> 1994
    }

    private static void printResult(String s) {
        int result = romanToInt(s);
        System.out.println("Input: " + s + " -> Output: " + result);
    }

    private static int romanToInt(String s) {
        if (s == null || s.length() == 0) {
            return -1;
        }

        Map<Character, Integer> romanNumerals = new HashMap<>();
        romanNumerals.put('I', 1);
        romanNumerals.put('V', 5);
        romanNumerals.put('X', 10);
        romanNumerals.put('L', 50);
        romanNumerals.put('C', 100);
        romanNumerals.put('D', 500);
        romanNumerals.put('M', 1000);

        int result = 0;
        for (int i = 0; i < s.length() - 1; i++) {
            int current = romanNumerals.get(s.charAt(i));
            int next = romanNumerals.get(s.charAt(i + 1));
            if (current < next) {
                result -= current;
            } else {
                result += current;
            }
        }
        result += romanNumerals.get(s.charAt(s.length() - 1));

        return result;
    }
}
