#include <bits/stdc++.h>

using namespace std;

string largestOddNumber(string s)
{
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if ((int)(s[i]) % 2 == 1)
        {
            return s.substr(0, i + 1);
        }
    }
    return "";
}

int main()
{
    // Test case 1: Basic example
    string input1 = "52";
    string result1 = largestOddNumber(input1);
    cout << "Test Case 1: Input: \"" << input1 << "\", Result: \"" << result1 << "\"" << endl;

    // Test case 2: Odd number at the end
    string input2 = "123456789";
    string result2 = largestOddNumber(input2);
    cout << "Test Case 2: Input: \"" << input2 << "\", Result: \"" << result2 << "\"" << endl;

    // Test case 3: No odd number
    string input3 = "24686420";
    string result3 = largestOddNumber(input3);
    cout << "Test Case 3: Input: \"" << input3 << "\", Result: \"" << result3 << "\"" << endl;

    // Test case 4: Odd number in the middle
    string input4 = "24613578";
    string result4 = largestOddNumber(input4);
    cout << "Test Case 4: Input: \"" << input4 << "\", Result: \"" << result4 << "\"" << endl;

    // Test case 5: Empty string
    string input5 = "";
    string result5 = largestOddNumber(input5);
    cout << "Test Case 5: Input: \"" << input5 << "\", Result: \"" << result5 << "\"" << endl;

    return 0;
}