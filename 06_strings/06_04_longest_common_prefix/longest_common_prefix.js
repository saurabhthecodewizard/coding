const longestCommonPrefix = (strs = []) => {
    if (!strs.length) {
        return '';
    }

    strs.sort();
    let index = 0;
    const length = strs[0].length;
    while (index < length) {
        if (strs[0][index] === strs[strs.length - 1][index]) {
            index++;
        } else {
            break;
        }
    }
    return strs[0].substring(0, index);
}

// Test case 1: Basic example
let input1 = ["flower", "flow", "flight"];
let result1 = longestCommonPrefix(input1);
console.log(`Test Case 1: Input: [${input1}], Result: "${result1}"`);

// Test case 2: No common prefix
let input2 = ["dog", "racecar", "car"];
let result2 = longestCommonPrefix(input2);
console.log(`Test Case 2: Input: [${input2}], Result: "${result2}"`);

// Test case 3: Common prefix at the beginning
let input3 = ["apple", "apricot", "apology"];
let result3 = longestCommonPrefix(input3);
console.log(`Test Case 3: Input: [${input3}], Result: "${result3}"`);

// Test case 4: Empty array
let input4 = [];
let result4 = longestCommonPrefix(input4);
console.log(`Test Case 4: Input: [${input4}], Result: "${result4}"`);

// Test case 5: Single-word array
let input5 = ["programming"];
let result5 = longestCommonPrefix(input5);
console.log(`Test Case 5: Input: [${input5}], Result: "${result5}"`);