public class MaximumNestingDepthOfParentheses {
    public static void main(String[] args) {
        // Test cases
        printMaxDepth("(a(b)c)"); // Output: "(a(b)c)", Depth: 2
        printMaxDepth("(a(b(c)d)e)"); // Output: "(a(b(c)d)e)", Depth: 3
        printMaxDepth("()"); // Output: "()", Depth: 1
        printMaxDepth("((()))"); // Output: "((()))", Depth: 3
        printMaxDepth("()()"); // Output: "()()", Depth: 1
        printMaxDepth("((())())"); // Output: "((())())", Depth: 4
        printMaxDepth(""); // Output: "", Depth: 0
    }

    private static void printMaxDepth(String s) {
        int depth = maxDepth(s);
        System.out.println("Output: \"" + s + "\", Depth: " + depth);
    }

    private static int maxDepth(String s) {
        int result = 0;
        int count = 0;
        for (char ch : s.toCharArray()) {
            if (ch == '(') {
                count++;
                result = Math.max(result, count);
            } else if (ch == ')') {
                count--;
            }
        }
        return result;
    }
}
