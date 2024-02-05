#include <bits/stdc++.h>

using namespace std;

string longestCommonPrefix(vector<string> &strs)
{
    if (strs.empty())
    {
        return "";
    }

    sort(strs.begin(), strs.end());
    int index = 0;
    int length = strs.size();
    for (int i = 0; i < length; i++)
    {
        if (strs[0][i] == strs.back()[i])
        {
            index++;
        }
        else
        {
            break;
        }
    }
    return strs[0].substr(0, index);
}

int main()
{
    // Test case 1: Basic example
    vector<string> input1 = {"flower", "flow", "flight"};
    string result1 = longestCommonPrefix(input1);
    cout << "Test Case 1: Input: {";
    for (const auto &str : input1)
    {
        cout << "\"" << str << "\", ";
    }
    cout << "}, Result: \"" << result1 << "\"" << endl;

    // Test case 2: No common prefix
    vector<string> input2 = {"dog", "racecar", "car"};
    string result2 = longestCommonPrefix(input2);
    cout << "Test Case 2: Input: {";
    for (const auto &str : input2)
    {
        cout << "\"" << str << "\", ";
    }
    cout << "}, Result: \"" << result2 << "\"" << endl;

    // Test case 3: Common prefix at the beginning
    vector<string> input3 = {"apple", "apricot", "apology"};
    string result3 = longestCommonPrefix(input3);
    cout << "Test Case 3: Input: {";
    for (const auto &str : input3)
    {
        cout << "\"" << str << "\", ";
    }
    cout << "}, Result: \"" << result3 << "\"" << endl;

    // Test case 4: Empty vector
    vector<string> input4 = {};
    string result4 = longestCommonPrefix(input4);
    cout << "Test Case 4: Input: {";
    for (const auto &str : input4)
    {
        cout << "\"" << str << "\", ";
    }
    cout << "}, Result: \"" << result4 << "\"" << endl;

    // Test case 5: Single-word vector
    vector<string> input5 = {"programming"};
    string result5 = longestCommonPrefix(input5);
    cout << "Test Case 5: Input: {";
    for (const auto &str : input5)
    {
        cout << "\"" << str << "\", ";
    }
    cout << "}, Result: \"" << result5 << "\"" << endl;

    return 0;
}