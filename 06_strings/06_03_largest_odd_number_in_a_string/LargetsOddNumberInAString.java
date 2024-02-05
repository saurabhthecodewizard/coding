public class LargetsOddNumberInAString {
    public static void main(String[] args) {
        // Test case 1: Basic example
        String input1 = "52";
        String result1 = largestOddNumber(input1);
        System.out.println("Test Case 1: Input: \"" + input1 + "\", Result: \"" + result1 + "\"");

        // Test case 2: Odd number at the end
        String input2 = "123456789";
        String result2 = largestOddNumber(input2);
        System.out.println("Test Case 2: Input: \"" + input2 + "\", Result: \"" + result2 + "\"");

        // Test case 3: No odd number
        String input3 = "24686420";
        String result3 = largestOddNumber(input3);
        System.out.println("Test Case 3: Input: \"" + input3 + "\", Result: \"" + result3 + "\"");

        // Test case 4: Odd number in the middle
        String input4 = "24613578";
        String result4 = largestOddNumber(input4);
        System.out.println("Test Case 4: Input: \"" + input4 + "\", Result: \"" + result4 + "\"");

        // Test case 5: Empty string
        String input5 = "";
        String result5 = largestOddNumber(input5);
        System.out.println("Test Case 5: Input: \"" + input5 + "\", Result: \"" + result5 + "\"");
    }

    private static String largestOddNumber(String num) {
        for (int i = num.length() - 1; i >= 0; i--) {
            if ((int) (num.charAt(i)) % 2 == 1) {
                return num.substring(0, i + 1);
            }
        }
        return "";
    }
}
