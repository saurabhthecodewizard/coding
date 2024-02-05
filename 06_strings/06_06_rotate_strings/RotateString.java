public class RotateString {
    public static void main(String[] args) {
        // Test case 1: Basic example
        String s1 = "abcde";
        String goal1 = "deabc";
        System.out.println("Test Case 1: " + rotateString(s1, goal1) + ", Strings: \"" + s1 + "\", \"" + goal1 + "\"");

        // Test case 2: Unequal lengths
        String s2 = "hello";
        String goal2 = "world";
        System.out.println("Test Case 2: " + rotateString(s2, goal2) + ", Strings: \"" + s2 + "\", \"" + goal2 + "\"");

        // Test case 3: Rotation with repeated characters
        String s3 = "aaaaab";
        String goal3 = "baaaaa";
        System.out.println("Test Case 3: " + rotateString(s3, goal3) + ", Strings: \"" + s3 + "\", \"" + goal3 + "\"");

        // Test case 4: Empty strings
        String s4 = "";
        String goal4 = "";
        System.out.println("Test Case 4: " + rotateString(s4, goal4) + ", Strings: \"" + s4 + "\", \"" + goal4 + "\"");

        // Test case 5: Same string
        String s5 = "same";
        String goal5 = "same";
        System.out.println("Test Case 5: " + rotateString(s5, goal5) + ", Strings: \"" + s5 + "\", \"" + goal5 + "\"");

        // Test case 6: Rotation with different characters
        String s6 = "abc";
        String goal6 = "xyz";
        System.out.println("Test Case 6: " + rotateString(s6, goal6) + ", Strings: \"" + s6 + "\", \"" + goal6 + "\"");
    }

    private static boolean rotateString(String s, String goal) {
        return s.length() == goal.length() && (s + s).contains(goal);
    }
}
