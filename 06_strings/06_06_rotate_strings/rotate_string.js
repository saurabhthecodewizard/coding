const rotateString = (s = '', goal = '') => {
    return s.length == goal.length && (s + s).includes(goal);
}

// Test case 1: Basic example
let s1 = "abcde";
let goal1 = "deabc";
console.log(`Test Case 1: ${rotateString(s1, goal1)}, Strings: "${s1}", "${goal1}"`);

// Test case 2: Unequal lengths
let s2 = "hello";
let goal2 = "world";
console.log(`Test Case 2: ${rotateString(s2, goal2)}, Strings: "${s2}", "${goal2}"`);

// Test case 3: Rotation with repeated characters
let s3 = "aaaaab";
let goal3 = "baaaaa";
console.log(`Test Case 3: ${rotateString(s3, goal3)}, Strings: "${s3}", "${goal3}"`);

// Test case 4: Empty strings
let s4 = "";
let goal4 = "";
console.log(`Test Case 4: ${rotateString(s4, goal4)}, Strings: "${s4}", "${goal4}"`);

// Test case 5: Same string
let s5 = "same";
let goal5 = "same";
console.log(`Test Case 5: ${rotateString(s5, goal5)}, Strings: "${s5}", "${goal5}"`);

// Test case 6: Rotation with different characters
let s6 = "abc";
let goal6 = "xyz";
console.log(`Test Case 6: ${rotateString(s6, goal6)}, Strings: "${s6}", "${goal6}"`);