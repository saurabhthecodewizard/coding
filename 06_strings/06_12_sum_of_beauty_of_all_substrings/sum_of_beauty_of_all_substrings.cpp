#include <iostream>
#include <vector>
#include <algorithm>
#include<climits>

using namespace std;

void test(const string& input);
int beautySum(const string& s);
int getMin(const vector<int>& arr);
int getMax(const vector<int>& arr);

int main() {
    // Test cases
    test("aabcb");      // Output: 5
    test("aabcbaa");    // Output: 17
    test("abcde");      // Output: 0
    test("abcabc");     // Output: 5
    test("aaaa");       // Output: 0
    test("abcdabcd");   // Output: 9

    return 0;
}

void test(const string& input) {
    int result = beautySum(input);
    cout << "Input: \"" << input << "\" -> Output: " << result << endl;
}

int beautySum(const string& s) {
    int sum = 0;
    for (int i = 0; i < s.length(); i++) {
        vector<int> frequency(26, 0);
        for (int j = i; j < s.length(); j++) {
            frequency[s[j] - 'a']++;
            sum += getMax(frequency) - getMin(frequency);
        }
    }
    return sum;
}

int getMin(const vector<int>& arr) {
    int minimum = INT_MAX;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > 0) {
            minimum = min(minimum, arr[i]);
        }
    }
    return minimum;
}

int getMax(const vector<int>& arr) {
    int maximum = INT_MIN;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > 0) {
            maximum = max(maximum, arr[i]);
        }
    }
    return maximum;
}
