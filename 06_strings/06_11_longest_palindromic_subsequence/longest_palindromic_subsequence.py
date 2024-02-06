def extendedPalindrome(s: str, l: int, r: int):
    while l < len(s) and r >= 0 and s[l] == s[r]:
        l += 1
        r -= 1
    return s[r + 1: l]

def longestPalindrome(s: str):
    result = ""
    for i in range(len(s)):
        temp = extendedPalindrome(s, i, i)
        if len(temp) > len(result):
            result = temp
        temp = extendedPalindrome(s, i + 1, i)
        if len(temp) > len(result):
            result = temp
    return result

# Test cases
print("Input: \"babad\" -> Output: \"" + longestPalindrome("babad") + "\"")
print("Input: \"cbbd\"  -> Output: \"" + longestPalindrome("cbbd") + "\"")
print("Input: \"a\"     -> Output: \"" + longestPalindrome("a") + "\"")
print("Input: \"ac\"    -> Output: \"" + longestPalindrome("ac") + "\"")