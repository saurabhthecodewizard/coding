const romanToInt = (s = '') => {
    if (!s || s.length === 0) {
        return -1;
    }

    const romanNumerals = {
        'I': 1,
        'V': 5,
        'X': 10,
        'L': 50,
        'C': 100,
        'D': 500,
        'M': 1000
    };

    let result = 0;
    for (let i = 0; i < s.length - 1; i++) {
        const current = romanNumerals[s[i]];
        const next = romanNumerals[s[i + 1]];
        if (current < next) {
            result -= current
        } else {
            result += current
        }
    }
    result += romanNumerals[s[s.length - 1]]
    return result;
}

// Test cases
console.log(`Input: III -> Output: ${romanToInt('III')}`);
console.log(`Input: IV -> Output: ${romanToInt('IV')}`);
console.log(`Input: IX -> Output: ${romanToInt('IX')}`);
console.log(`Input: LVIII -> Output: ${romanToInt('LVIII')}`);
console.log(`Input: MCMXCIV -> Output: ${romanToInt('MCMXCIV')}`);