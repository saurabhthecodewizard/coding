#include <iostream>
#include <unordered_map>

int romanToInt(const std::string& s) {
    if (s.empty()) {
        return -1;
    }

    std::unordered_map<char, int> romanNumerals = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

    int result = 0;
    for (size_t i = 0; i < s.length() - 1; i++) {
        int current = romanNumerals[s[i]];
        int next = romanNumerals[s[i + 1]];
        if (current < next) {
            result -= current;
        } else {
            result += current;
        }
    }
    result += romanNumerals[s.back()];

    return result;
}

int main() {
    // Test cases
    std::cout << "Input: III -> Output: " << romanToInt("III") << std::endl;
    std::cout << "Input: IV -> Output: " << romanToInt("IV") << std::endl;
    std::cout << "Input: IX -> Output: " << romanToInt("IX") << std::endl;
    std::cout << "Input: LVIII -> Output: " << romanToInt("LVIII") << std::endl;
    std::cout << "Input: MCMXCIV -> Output: " << romanToInt("MCMXCIV") << std::endl;

    return 0;
}
