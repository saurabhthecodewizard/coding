#include <bits/stdc++.h>

using namespace std;

bool isIsomorphic(string s, string t)
{
    if (s.length() != t.length())
    {
        return false;
    }

    unordered_map<char, char> sMap, tMap;

    for (int i = 0; i < s.length(); i++)
    {
        if (sMap.find(s[i]) == sMap.end() && tMap.find(t[i]) == tMap.end())
        {
            sMap[s[i]] = t[i];
            tMap[t[i]] = s[i];
        }
        else if (sMap[s[i]] != t[i] || tMap[t[i]] != s[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    // Test case 1: Basic example
    cout << "Test Case 1: " << (isIsomorphic("egg", "add") ? "true" : "false") << endl;

    // Test case 2: Characters in s map to same character in t
    cout << "Test Case 2: " << (isIsomorphic("foo", "bar") ? "true" : "false") << endl;

    // Test case 3: Isomorphic strings
    cout << "Test Case 3: " << (isIsomorphic("paper", "title") ? "true" : "false") << endl;

    return 0;
}