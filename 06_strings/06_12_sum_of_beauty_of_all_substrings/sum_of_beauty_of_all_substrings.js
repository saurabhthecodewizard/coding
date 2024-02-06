function beautySum(s) {
    let result = 0;
    for (let i = 0; i < s.length; i++) {
        const frequency = Array(26).fill(0);
        for (let j = i; j < s.length; j++) {
            frequency[s.charCodeAt(j) - 'a'.charCodeAt(0)] += 1;
            result += Math.max(...frequency) - Math.min(...frequency.filter(x => x > 0));
        }
    }
    return result;
}

function test(inputStr) {
    const result = beautySum(inputStr);
    console.log(`Input: "${inputStr}" -> Output: ${result}`);
}

// Test cases
test("aabcb");      // Output: 5
test("aabcbaa");    // Output: 17
test("abcde");      // Output: 0
test("abcabc");     // Output: 5
test("aaaa");       // Output: 0
test("abcdabcd");   // Output: 9
