public class SumOfBeautyOfAllSubstrings {
    public static void main(String[] args) {
        // Test cases
        test("aabcb");     // Output: 5
        test("aabcbaa");   // Output: 17
        test("abcde");     // Output: 0
        test("abcabc");    // Output: 5
        test("aaaa");      // Output: 0
        test("abcdabcd");  // Output: 9
    }

    private static void test(String input) {
        int result = beautySum(input);
        System.out.println("Input: \"" + input + "\" -> Output: " + result);
    }

    private static int beautySum(String s) {
        int sum = 0;
        for (int i = 0; i < s.length(); i++) {
            int[] frequency = new int[26];
            for (int j = i; j < s.length(); j++) {
                frequency[s.charAt(j) - 'a']++;
                sum += getMax(frequency) - getMin(frequency);
            }
        }
        return sum;
    }

    private static int getMin(int[] arr) {
        int min = Integer.MAX_VALUE;
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] > 0) {
                min = Math.min(min, arr[i]);
            }
        }
        return min;
    }

    private static int getMax(int[] arr) {
        int max = Integer.MIN_VALUE;
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] > 0) {
                max = Math.max(max, arr[i]);
            }
        }
        return max;
    }
}
