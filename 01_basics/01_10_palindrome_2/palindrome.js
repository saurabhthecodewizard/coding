function isPalindrome(s) {
    let i = 0;
    let j = s.length - 1;

    while (i < j) {
        while (i < j && !isAlphanumeric(s[i])) {
            i++;
        }
        while (i < j && !isAlphanumeric(s[j])) {
            j--;
        }
        if (i < j && s[i].toLowerCase() !== s[j].toLowerCase()) {
            return false;
        }
        i++;
        j--;
    }

    return true;
}

function isAlphanumeric(char) {
    const code = char.charCodeAt(0);
    return (code >= '0'.charCodeAt(0) && code <= '9'.charCodeAt(0)) ||
        (code >= 'A'.charCodeAt(0) && code <= 'Z'.charCodeAt(0)) ||
        (code >= 'a'.charCodeAt(0) && code <= 'z'.charCodeAt(0));
}

const str = "A man, a plan, a canal: Panama";
console.log(str);
console.log("Is Palindrome:", isPalindrome(str));