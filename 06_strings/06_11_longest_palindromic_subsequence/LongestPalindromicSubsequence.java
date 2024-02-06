public class LongestPalindromicSubsequence {
    public static void main(String[] args) {
        // Test cases
        test("babad"); // Output: "bab" or "aba"
        test("cbbd");  // Output: "bb"
        test("a");     // Output: "a"
        test("ac");    // Output: "a" or "c"
    }

    private static void test(String input) {
        String result = longestPalindrome(input);
        System.out.println("Input: \"" + input + "\" -> Output: \"" + result + "\"");
    }

    private static String longestPalindrome(String s) {
        String result = "";
        for (int i = 0; i < s.length(); i++) {
            String temp = extendPalindrome(s, i, i);
            if (temp.length() > result.length()) {
                result = temp;
            }
            temp = extendPalindrome(s, i + 1, i);
            if (temp.length() > result.length()) {
                result = temp;
            }
        }
        return result;
    }

    private static String extendPalindrome(String s, int left, int right) {
        while (left < s.length() && right >= 0 && s.charAt(left) == s.charAt(right)) {
            left++;
            right--;
        }
        return s.substring(right + 1, left);
    }
}
