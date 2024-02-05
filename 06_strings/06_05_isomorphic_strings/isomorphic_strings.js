const isIsomorphic = (s = '', t = '') => {
    if (s.length != t.length) {
        return false;
    }

    const sMap = new Map();
    const tMap = new Map();

    for (let i = 0; i < s.length; i++) {
        if (!sMap.has(s[i]) && !tMap.has(t[i])) {
            sMap.set(s[i], t[i]);
            tMap.set(t[i], s[i]);
        } else if (sMap.get(s[i]) != t[i] || tMap.get(t[i]) != s[i]) {
            return false;
        }
    }
    return true;
}

// Test case 1: Basic example
console.log("Test Case 1:", isIsomorphic("egg", "add"));

// Test case 2: Characters in s map to same character in t
console.log("Test Case 2:", isIsomorphic("foo", "bar"));

// Test case 3: Isomorphic strings
console.log("Test Case 3:", isIsomorphic("paper", "title"));