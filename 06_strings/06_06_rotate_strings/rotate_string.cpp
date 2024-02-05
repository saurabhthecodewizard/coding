#include <bits/stdc++.h>

using namespace std;

bool rotateString(string s, string goal)
{
    return s.length() == goal.length() && (s + s).find(goal) != string::npos;
}

int main()
{
    // Test case 1: Basic example
    string s1 = "abcde";
    string goal1 = "deabc";
    cout << "Test Case 1: " << (rotateString(s1, goal1) ? "true" : "false") << ", Strings: \"" << s1 << "\", \"" << goal1 << "\"" << endl;

    // Test case 2: Unequal lengths
    string s2 = "hello";
    string goal2 = "world";
    cout << "Test Case 2: " << (rotateString(s2, goal2) ? "true" : "false") << ", Strings: \"" << s2 << "\", \"" << goal2 << "\"" << endl;

    // Test case 3: Rotation with repeated characters
    string s3 = "aaaaab";
    string goal3 = "baaaaa";
    cout << "Test Case 3: " << (rotateString(s3, goal3) ? "true" : "false") << ", Strings: \"" << s3 << "\", \"" << goal3 << "\"" << endl;

    // Test case 4: Empty strings
    string s4 = "";
    string goal4 = "";
    cout << "Test Case 4: " << (rotateString(s4, goal4) ? "true" : "false") << ", Strings: \"" << s4 << "\", \"" << goal4 << "\"" << endl;

    // Test case 5: Same string
    string s5 = "same";
    string goal5 = "same";
    cout << "Test Case 5: " << (rotateString(s5, goal5) ? "true" : "false") << ", Strings: \"" << s5 << "\", \"" << goal5 << "\"" << endl;

    // Test case 6: Rotation with different characters
    string s6 = "abc";
    string goal6 = "xyz";
    cout << "Test Case 6: " << (rotateString(s6, goal6) ? "true" : "false") << ", Strings: \"" << s6 << "\", \"" << goal6 << "\"" << endl;

    return 0;
}