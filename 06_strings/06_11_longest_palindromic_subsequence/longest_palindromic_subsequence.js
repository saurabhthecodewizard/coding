const extendedPalindrome = (s = '', l = 0, r = 0) => {
    while (l < s.length && r >= 0 && s[l] === s[r]) {
        l++;
        r--;
    }
    return s.substring(r + 1, l);
}

const longestPalindrome = (s = '') => {
    let result = '';
    for (let i = 0; i < s.length; i++) {
        let temp = extendedPalindrome(s, i, i);
        if (temp.length > result.length) {
            result = temp;
        }
        temp = extendedPalindrome(s, i + 1, i);
        if (temp.length > result.length) {
            result = temp;
        }
    }
    return result;
}

// Test cases
console.log('Input: "babad" -> Output: "' + longestPalindrome("babad") + '"');
console.log('Input: "cbbd"  -> Output: "' + longestPalindrome("cbbd") + '"');
console.log('Input: "a"     -> Output: "' + longestPalindrome("a") + '"');
console.log('Input: "ac"    -> Output: "' + longestPalindrome("ac") + '"');