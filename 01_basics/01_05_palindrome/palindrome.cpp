#include<iostream>

using namespace std;

bool is_palindrome(int x)
{
    if (x < 0)
    {
        return false;
    }
    long long reversed = 0;
    long long temp = x;

    while (temp != 0)
    {
        int digit = temp % 10;
        reversed = reversed * 10 + digit;
        temp /= 10;
    }

    return (reversed == x);
}

int main()
{
    int num = 123321;

    cout << "Is " << num << " Palindrome: " << is_palindrome(num) << endl;
}