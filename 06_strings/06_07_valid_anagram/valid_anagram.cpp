#include <bits/stdc++.h>

using namespace std;

bool isAnagram(string s, string t)
{
    if (s.length() != t.length())
    {
        return false;
    }
    
    int count[26] = {0};

    for (char c : s)
    {
        count[c - 'a']++;
    }
    for (char c : t)
    {
        count[c - 'a']--;
    }
    for (int num : count)
    {
        if (num != 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    // Test case 1: Basic example
    string s1 = "listen";
    string t1 = "silent";
    cout << "Test Case 1: " << (isAnagram(s1, t1) ? "true" : "false") << ", Strings: \"" << s1 << "\", \"" << t1 << "\"" << endl;

    // Test case 2: Unequal lengths
    string s2 = "hello";
    string t2 = "world";
    cout << "Test Case 2: " << (isAnagram(s2, t2) ? "true" : "false") << ", Strings: \"" << s2 << "\", \"" << t2 << "\"" << endl;

    // Test case 3: Anagram with repeated characters
    string s3 = "abcabc";
    string t3 = "bacbca";
    cout << "Test Case 3: " << (isAnagram(s3, t3) ? "true" : "false") << ", Strings: \"" << s3 << "\", \"" << t3 << "\"" << endl;

    // Test case 4: Empty strings
    string s4 = "";
    string t4 = "";
    cout << "Test Case 4: " << (isAnagram(s4, t4) ? "true" : "false") << ", Strings: \"" << s4 << "\", \"" << t4 << "\"" << endl;

    // Test case 5: Anagram with different character counts
    string s5 = "abcd";
    string t5 = "abc";
    cout << "Test Case 5: " << (isAnagram(s5, t5) ? "true" : "false") << ", Strings: \"" << s5 << "\", \"" << t5 << "\"" << endl;

    // Test case 6: Anagram with different characters
    string s6 = "abcd";
    string t6 = "efgh";
    cout << "Test Case 6: " << (isAnagram(s6, t6) ? "true" : "false") << ", Strings: \"" << s6 << "\", \"" << t6 << "\"" << endl;

    return 0;
}