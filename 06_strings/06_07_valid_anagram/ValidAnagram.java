public class ValidAnagram {
    public static void main(String[] args) {
        // Test case 1: Basic example
        String s1 = "listen";
        String t1 = "silent";
        System.out.println(
                "Test Case 1: " + (isAnagram(s1, t1) ? "true" : "false") + ", Strings: \"" + s1 + "\", \"" + t1 + "\"");

        // Test case 2: Unequal lengths
        String s2 = "hello";
        String t2 = "world";
        System.out.println(
                "Test Case 2: " + (isAnagram(s2, t2) ? "true" : "false") + ", Strings: \"" + s2 + "\", \"" + t2 + "\"");

        // Test case 3: Anagram with repeated characters
        String s3 = "abcabc";
        String t3 = "bacbca";
        System.out.println(
                "Test Case 3: " + (isAnagram(s3, t3) ? "true" : "false") + ", Strings: \"" + s3 + "\", \"" + t3 + "\"");

        // Test case 4: Empty strings
        String s4 = "";
        String t4 = "";
        System.out.println(
                "Test Case 4: " + (isAnagram(s4, t4) ? "true" : "false") + ", Strings: \"" + s4 + "\", \"" + t4 + "\"");

        // Test case 5: Anagram with different character counts
        String s5 = "abcd";
        String t5 = "abc";
        System.out.println(
                "Test Case 5: " + (isAnagram(s5, t5) ? "true" : "false") + ", Strings: \"" + s5 + "\", \"" + t5 + "\"");

        // Test case 6: Anagram with different characters
        String s6 = "abcd";
        String t6 = "efgh";
        System.out.println(
                "Test Case 6: " + (isAnagram(s6, t6) ? "true" : "false") + ", Strings: \"" + s6 + "\", \"" + t6 + "\"");
    }

    private static boolean isAnagram(String s, String t) {
        if (s.length() != t.length()) {
            return false;
        }
        int[] count = new int[26];
        for (char c : s.toCharArray()) {
            count[c - 'a']++;
        }
        for (char c : t.toCharArray()) {
            count[c - 'a']--;
        }
        for (int num : count) {
            if (num != 0) {
                return false;
            }
        }
        return true;
    }
}
