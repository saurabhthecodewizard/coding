#include <iostream>

std::string extendPalindrome(const std::string& s, int left, int right) {
    while (left < s.length() && right >= 0 && s[left] == s[right]) {
        left++;
        right--;
    }
    return s.substr(right + 1, left - right - 1);
}

std::string longestPalindrome(const std::string& s) {
    std::string result = "";
    for (int i = 0; i < s.length(); i++) {
        std::string temp = extendPalindrome(s, i, i);
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

int main() {
    // Test cases
    std::cout << "Input: \"babad\" -> Output: \"" << longestPalindrome("babad") << "\"" << std::endl;
    std::cout << "Input: \"cbbd\"  -> Output: \"" << longestPalindrome("cbbd") << "\"" << std::endl;
    std::cout << "Input: \"a\"     -> Output: \"" << longestPalindrome("a") << "\"" << std::endl;
    std::cout << "Input: \"ac\"    -> Output: \"" << longestPalindrome("ac") << "\"" << std::endl;

    return 0;
}
