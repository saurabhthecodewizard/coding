const isAnagram = (s = '', t = '') => {
    if (s.length != t.length) {
        return false;
    }

    const count = new Array(26).fill(0);
    for (const char of s) {
        count[char.charCodeAt(0) - 'a'.charCodeAt(0)]++;
    }
    for (const char of t) {
        count[char.charCodeAt(0) - 'a'.charCodeAt(0)]--;
    }
    for (const num of count) {
        if (num != 0) {
            return false;
        }
    }
    return true;
}

// Test case 1: Basic example
let s1 = "listen";
let t1 = "silent";
console.log(`Test Case 1: ${isAnagram(s1, t1)}, Strings: "${s1}", "${t1}"`);

// Test case 2: Unequal lengths
let s2 = "hello";
let t2 = "world";
console.log(`Test Case 2: ${isAnagram(s2, t2)}, Strings: "${s2}", "${t2}"`);

// Test case 3: Anagram with repeated characters
let s3 = "abcabc";
let t3 = "bacbca";
console.log(`Test Case 3: ${isAnagram(s3, t3)}, Strings: "${s3}", "${t3}"`);

// Test case 4: Empty strings
let s4 = "";
let t4 = "";
console.log(`Test Case 4: ${isAnagram(s4, t4)}, Strings: "${s4}", "${t4}"`);

// Test case 5: Anagram with different character counts
let s5 = "abcd";
let t5 = "abc";
console.log(`Test Case 5: ${isAnagram(s5, t5)}, Strings: "${s5}", "${t5}"`);

// Test case 6: Anagram with different characters
let s6 = "abcd";
let t6 = "efgh";
console.log(`Test Case 6: ${isAnagram(s6, t6)}, Strings: "${s6}", "${t6}"`);