function frequencySort(s) {
    const frequencyMap = new Map();
    for (const char of s) {
        frequencyMap.set(char, (frequencyMap.get(char) || 0) + 1);
    }

    const charFreqArray = Array.from(frequencyMap, ([char, freq]) => ({ char, freq }));

    charFreqArray.sort((a, b) => b.freq - a.freq);

    let result = '';
    for (const { char, freq } of charFreqArray) {
        result += char.repeat(freq);
    }

    return result;
}

// Test cases
const result1 = frequencySort("tree");
console.log(`Output for 'tree': ${result1}`);   // Output: "eetr" or "eert"

const result2 = frequencySort("cccaaa");
console.log(`Output for 'cccaaa': ${result2}`);  // Output: "aaaccc" or "cccaaa"

const result3 = frequencySort("Aabb");
console.log(`Output for 'Aabb': ${result3}`);    // Output: "bbAa" or "bbaA"
