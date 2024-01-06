function isPalindrome(n) {
    if (n < 0) {
        return false;
    }
    return n.toString() === n.toString().split('').reverse().join('');
}

const num = 123321;
console.log(`Is ${num} palindrome: ${isPalindrome(num)}`);