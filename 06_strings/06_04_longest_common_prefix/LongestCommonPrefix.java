import java.util.Arrays;

public class LongestCommonPrefix {
    public static void main(String[] args) {
        // Test case 1: Basic example
        String[] input1 = { "flower", "flow", "flight" };
        String result1 = longestCommonPrefix(input1);
        System.out.println("Test Case 1: Input: " + Arrays.toString(input1) + ", Result: \"" + result1 + "\"");

        // Test case 2: No common prefix
        String[] input2 = { "dog", "racecar", "car" };
        String result2 = longestCommonPrefix(input2);
        System.out.println("Test Case 2: Input: " + Arrays.toString(input2) + ", Result: \"" + result2 + "\"");

        // Test case 3: Common prefix at the beginning
        String[] input3 = { "apple", "apricot", "apology" };
        String result3 = longestCommonPrefix(input3);
        System.out.println("Test Case 3: Input: " + Arrays.toString(input3) + ", Result: \"" + result3 + "\"");

        // Test case 4: Empty array
        String[] input4 = {};
        String result4 = longestCommonPrefix(input4);
        System.out.println("Test Case 4: Input: " + Arrays.toString(input4) + ", Result: \"" + result4 + "\"");

        // Test case 5: Single-word array
        String[] input5 = { "programming" };
        String result5 = longestCommonPrefix(input5);
        System.out.println("Test Case 5: Input: " + Arrays.toString(input5) + ", Result: \"" + result5 + "\"");
    }

    private static String longestCommonPrefix(String[] args) {
        if (args.length <= 0) {
            return "";
        }
        Arrays.sort(args);

        int length = args[0].length();
        int i = 0;
        while (i < length) {
            if (args[0].charAt(i) == args[args.length - 1].charAt(i)) {
                i++;
            } else {
                break;
            }
        }

        return args[0].substring(0, i);
    }
}
