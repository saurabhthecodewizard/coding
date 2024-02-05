public class RemoveOuterParentheses {
    public static void main(String[] args) {
        // Test case 1: Basic example
        String input1 = "(()())";
        String removed1 = removeOuterParentheses(input1);
        System.out.println("Test Case 1: Original: " + input1 + ", Removed: " + removed1);

        // Test case 2: Nested parentheses
        String input2 = "(()(()))";
        String removed2 = removeOuterParentheses(input2);
        System.out.println("Test Case 2: Original: " + input2 + ", Removed: " + removed2);

        // Test case 3: No outer parentheses
        String input3 = "()()";
        String removed3 = removeOuterParentheses(input3);
        System.out.println("Test Case 3: Original: " + input3 + ", Removed: " + removed3);

        // Test case 4: Empty string
        String input4 = "";
        String removed4 = removeOuterParentheses(input4);
        System.out.println("Test Case 4: Original: " + input4 + ", Removed: " + removed4);

        // Test case 5: Only one pair of parentheses
        String input5 = "(())";
        String removed5 = removeOuterParentheses(input5);
        System.out.println("Test Case 5: Original: " + input5 + ", Removed: " + removed5);
    }

    private static String removeOuterParentheses(String s) {
        StringBuilder sb = new StringBuilder();
        int opened = 0;
        for (char c : s.toCharArray()) {
            if (c == '(' && opened++ > 0) {
                sb.append(c);
            }
            if (c == ')' && opened-- > 1) {
                sb.append(c);
            }
        }
        return sb.toString();
    }
}