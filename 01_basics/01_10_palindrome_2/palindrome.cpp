#include <bits/stdc++.h>

using namespace std;

bool is_palindrome(string s)
{
    int i = 0;
    int j = s.size() - 1;

    while (i < j)
    {
        while ((i < j) && !isalnum(s[i]))
        {
            i++;
        }
        while ((i < j) && !isalnum(s[j]))
        {
            j--;
        }
        if ((i < j) && (tolower(s[i++]) != tolower(s[j--])))
        {
            return false;
        }
    }

    return true;
}

int main()
{
    string s = "A man, a plan, a canal: Panama";

    cout << s << endl;
    cout << "Is Palindrome: " << is_palindrome(s) << endl;
}