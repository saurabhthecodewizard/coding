public class ReverseWordsInAString {
    public static void main(String[] args) {
        // Test case 1: Basic example
        String input1 = "Hello World";
        String reversed1 = reverseWords(input1);
        System.out.println("Test Case 1: Original: \"" + input1 + "\", Reversed: \"" + reversed1 + "\"");

        // Test case 2: Multiple spaces between words
        String input2 = "   OpenAI    GPT-3.5   ";
        String reversed2 = reverseWords(input2);
        System.out.println("Test Case 2: Original: \"" + input2 + "\", Reversed: \"" + reversed2 + "\"");

        // Test case 3: Leading and trailing spaces
        String input3 = "   This is a test   ";
        String reversed3 = reverseWords(input3);
        System.out.println("Test Case 3: Original: \"" + input3 + "\", Reversed: \"" + reversed3 + "\"");

        // Test case 4: Empty string
        String input4 = "";
        String reversed4 = reverseWords(input4);
        System.out.println("Test Case 4: Original: \"" + input4 + "\", Reversed: \"" + reversed4 + "\"");

        // Test case 5: Single word
        String input5 = "Java";
        String reversed5 = reverseWords(input5);
        System.out.println("Test Case 5: Original: \"" + input5 + "\", Reversed: \"" + reversed5 + "\"");
    }

    private static String reverseWords(String s) {
        String[] array = s.trim().split(" ");
        StringBuilder result = new StringBuilder();
        for (int i = array.length - 1; i >= 0; i--) {
            if (!array[i].isEmpty()) {
                result.append(array[i]);
                result.append(" ");
            }
        }
        return result.toString().trim();
    }
}
