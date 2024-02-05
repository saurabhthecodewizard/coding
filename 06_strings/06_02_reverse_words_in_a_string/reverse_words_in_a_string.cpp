#include <bits/stdc++.h>

using namespace std;

string reverseWords(string s)
{
    stringstream ss(s);
    vector<string> words;
    string word;

    while (ss >> word)
    {
        words.push_back(word);
    }
    string result;
    for (int i = words.size() - 1; i >= 0; i--)
    {
        result += words[i] + " ";
    }
    if (!result.empty())
    {
        result.pop_back();
    }
    return result;
}

int main()
{
    // Test case 1: Basic example
    string input1 = "Hello World";
    string reversed1 = reverseWords(input1);
    cout << "Test Case 1: Original: \"" << input1 << "\", Reversed: \"" << reversed1 << "\"" << endl;

    // Test case 2: Multiple spaces between words
    string input2 = "   OpenAI    GPT-3.5   ";
    string reversed2 = reverseWords(input2);
    cout << "Test Case 2: Original: \"" << input2 << "\", Reversed: \"" << reversed2 << "\"" << endl;

    // Test case 3: Leading and trailing spaces
    string input3 = "   This is a test   ";
    string reversed3 = reverseWords(input3);
    cout << "Test Case 3: Original: \"" << input3 << "\", Reversed: \"" << reversed3 << "\"" << endl;

    // Test case 4: Empty string
    string input4 = "";
    string reversed4 = reverseWords(input4);
    cout << "Test Case 4: Original: \"" << input4 << "\", Reversed: \"" << reversed4 << "\"" << endl;

    // Test case 5: Single word
    string input5 = "C++";
    string reversed5 = reverseWords(input5);
    cout << "Test Case 5: Original: \"" << input5 << "\", Reversed: \"" << reversed5 << "\"" << endl;

    return 0;
}