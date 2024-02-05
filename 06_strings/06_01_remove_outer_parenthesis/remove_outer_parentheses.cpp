#include <bits/stdc++.h>

using namespace std;

string removeOuterParentheses(string s)
{
    int opened = 0;
    string result;
    for (char c : s)
    {
        if (c == '(' && opened++ > 0)
        {
            result += c;
        }
        if (c == ')' && opened-- > 1)
        {
            result += c;
        }
    }
    return result;
}

int main()
{
    // Test case 1: Basic example
    string input1 = "(()())";
    string removed1 = removeOuterParentheses(input1);
    cout << "Test Case 1: Original: " << input1 << ", Removed: " << removed1 << endl;

    // Test case 2: Nested parentheses
    string input2 = "(()(()))";
    string removed2 = removeOuterParentheses(input2);
    cout << "Test Case 2: Original: " << input2 << ", Removed: " << removed2 << endl;

    // Test case 3: No outer parentheses
    string input3 = "()()";
    string removed3 = removeOuterParentheses(input3);
    cout << "Test Case 3: Original: " << input3 << ", Removed: " << removed3 << endl;

    // Test case 4: Empty string
    string input4 = "";
    string removed4 = removeOuterParentheses(input4);
    cout << "Test Case 4: Original: " << input4 << ", Removed: " << removed4 << endl;

    // Test case 5: Only one pair of parentheses
    string input5 = "(())";
    string removed5 = removeOuterParentheses(input5);
    cout << "Test Case 5: Original: " << input5 << ", Removed: " << removed5 << endl;

    return 0;
}