const reverseWords = (s = '') => {
    const array = s.trim().split(/\s+/);
    return array.reverse().join(" ");
}

// Test case 1: Basic example
let input1 = "Hello World";
let reversed1 = reverseWords(input1);
console.log(`Test Case 1: Original: "${input1}", Reversed: "${reversed1}"`);

// Test case 2: Multiple spaces between words
let input2 = "   OpenAI    GPT-3.5   ";
let reversed2 = reverseWords(input2);
console.log(`Test Case 2: Original: "${input2}", Reversed: "${reversed2}"`);

// Test case 3: Leading and trailing spaces
let input3 = "   This is a test   ";
let reversed3 = reverseWords(input3);
console.log(`Test Case 3: Original: "${input3}", Reversed: "${reversed3}"`);

// Test case 4: Empty string
let input4 = "";
let reversed4 = reverseWords(input4);
console.log(`Test Case 4: Original: "${input4}", Reversed: "${reversed4}"`);

// Test case 5: Single word
let input5 = "JavaScript";
let reversed5 = reverseWords(input5);
console.log(`Test Case 5: Original: "${input5}", Reversed: "${reversed5}"`);