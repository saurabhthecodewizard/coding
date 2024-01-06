public class Palindrome {
    public static void main(String[] args) {
        int num = 123321;

        System.out.println(String.format("Is %d Palindrome: %b", num, isPalindrome(num)));
    }

    private static boolean isPalindrome(int x) {
        String numberInString = String.valueOf(x);
        Integer stringLength = numberInString.length();

        for(Integer index = 0; index < ((stringLength)/2); index++) {
            if(numberInString.charAt(index) != numberInString.charAt(stringLength - index - 1)) {
                return false;
            }
        }

        return true;
    }
}
