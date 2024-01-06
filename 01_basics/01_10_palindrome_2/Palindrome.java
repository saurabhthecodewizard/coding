public class Palindrome {
    public static void main(String[] args) {
        String st = "A man, a plan, a canal: Panama";
        System.out.println(st);
        System.out.println(String.format("Is Palindrome: %b", isPalindrome(st)));
    }

    private static boolean isPalindrome(String s) {
        int i = 0;
        int j = s.length() - 1;

        while (i < j) {
            while (!isAlNum(s.charAt(i))) {
                i++;
            }
            while (!isAlNum(s.charAt(j))) {
                j--;
            }
            if (s.toLowerCase().charAt(i++) != s.toLowerCase().charAt(j--)) {
                return false;
            }
        }

        return true;
    }

    private static boolean isAlNum(char ch) {
        return ('a' <= ch && ch <= 'z') || ('A' <= ch && ch <= 'Z') || ('0' <= ch && ch <= '9');
    }
}
