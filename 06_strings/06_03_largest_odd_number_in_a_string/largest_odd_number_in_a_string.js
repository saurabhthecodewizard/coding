const largestOddNumber = (num = '') => {
    for (let i = num.length - 1; i >= 0; i--) {
        if (parseInt(num[i]) % 2 == 1) {
            return num.substring(0, i + 1);
        }
    }
    return '';
}

// Test case 1: Basic example
let input1 = "52";
let result1 = largestOddNumber(input1);
console.log(`Test Case 1: Input: "${input1}", Result: "${result1}"`);

// Test case 2: Odd number at the end
let input2 = "123456789";
let result2 = largestOddNumber(input2);
console.log(`Test Case 2: Input: "${input2}", Result: "${result2}"`);

// Test case 3: No odd number
let input3 = "24686420";
let result3 = largestOddNumber(input3);
console.log(`Test Case 3: Input: "${input3}", Result: "${result3}"`);

// Test case 4: Odd number in the middle
let input4 = "24613578";
let result4 = largestOddNumber(input4);
console.log(`Test Case 4: Input: "${input4}", Result: "${result4}"`);

// Test case 5: Empty string
let input5 = "";
let result5 = largestOddNumber(input5);
console.log(`Test Case 5: Input: "${input5}", Result: "${result5}"`);