#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

string frequencySort(string s) {
    unordered_map<char, int> frequencyMap;
    for (char c : s) {
        frequencyMap[c]++;
    }

    vector<pair<char, int>> charFreqVector(frequencyMap.begin(), frequencyMap.end());

    sort(charFreqVector.begin(), charFreqVector.end(), [](const auto& a, const auto& b) {
        return b.second < a.second; // Sorting in descending order
    });

    string result;
    for (const auto& entry : charFreqVector) {
        const auto& character = entry.first;
        const auto& freq = entry.second;
        result += string(freq, character);
    }

    return result;
}

int main() {
    // Test cases
    string result1 = frequencySort("tree");
    cout << "Output for 'tree': " << result1 << endl;   // Output: "eetr" or "eert"

    string result2 = frequencySort("cccaaa");
    cout << "Output for 'cccaaa': " << result2 << endl;  // Output: "aaaccc" or "cccaaa"

    string result3 = frequencySort("Aabb");
    cout << "Output for 'Aabb': " << result3 << endl;    // Output: "bbAa" or "bbaA"

    return 0;
}
