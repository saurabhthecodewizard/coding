const removeOuterParentheses = (s = '') => {
    let result = '';
    let opened = 0;
    for (let i = 0; i < s.length; i++) {
        const c = s[i];
        if (c === '(' && opened++ > 0) {
            result += c;
        }
        if (c === ')' && opened-- > 1) {
            result += c;
        }
    }
    return result;
}

// Test case 1: Basic example
let input1 = "(()())";
let removed1 = removeOuterParentheses(input1);
console.log(`Test Case 1: Original: ${input1}, Removed: ${removed1}`);

// Test case 2: Nested parentheses
let input2 = "(()(()))";
let removed2 = removeOuterParentheses(input2);
console.log(`Test Case 2: Original: ${input2}, Removed: ${removed2}`);

// Test case 3: No outer parentheses
let input3 = "()()";
let removed3 = removeOuterParentheses(input3);
console.log(`Test Case 3: Original: ${input3}, Removed: ${removed3}`);

// Test case 4: Empty string
let input4 = "";
let removed4 = removeOuterParentheses(input4);
console.log(`Test Case 4: Original: ${input4}, Removed: ${removed4}`);

// Test case 5: Only one pair of parentheses
let input5 = "(())";
let removed5 = removeOuterParentheses(input5);
console.log(`Test Case 5: Original: ${input5}, Removed: ${removed5}`);