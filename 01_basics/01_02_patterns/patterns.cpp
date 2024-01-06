#include <iostream>

using namespace std;

void pattern1(size_t n)
{
    cout << "Pattern 1:-" << endl;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern2(size_t n)
{
    cout << endl;
    cout << "Pattern 2:-" << endl;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern3(size_t n)
{
    cout << endl;
    cout << "Pattern 3:-" << endl;
    for (size_t i = 1; i <= n; i++)
    {
        for (size_t j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern4(size_t n)
{
    cout << endl;
    cout << "Pattern 4:-" << endl;
    for (size_t i = 1; i <= n; i++)
    {
        for (size_t j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

void pattern5(size_t n)
{
    cout << endl;
    cout << "Pattern 5:-" << endl;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern6(size_t n)
{
    cout << endl;
    cout << "Pattern 6:-" << endl;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n - i; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
}

void pattern7(size_t n)
{
    cout << endl;
    cout << "Pattern 7:-" << endl;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n - i - 1; j++)
        {
            cout << "  ";
        }
        for (size_t k = 0; k < 2 * i + 1; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern8(size_t n)
{
    cout << endl;
    cout << "Pattern 8:-" << endl;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < i; j++)
        {
            cout << "  ";
        }
        for (size_t k = 0; k < 2 * (n - i) - 1; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern9(size_t n)
{
    cout << endl;
    cout << "Pattern 9:-" << endl;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n - i - 1; j++)
        {
            cout << "  ";
        }
        for (size_t k = 0; k < 2 * i + 1; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < i; j++)
        {
            cout << "  ";
        }
        for (size_t k = 0; k < 2 * (n - i) - 1; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern10(size_t n)
{
    cout << endl;
    cout << "Pattern 10:-" << endl;
    for (size_t i = 1; i <= 2 * n - 1; i++)
    {
        size_t limit = i;
        if (i > n)
        {
            limit = 2 * n - i;
        }
        for (size_t j = 0; j < limit; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern11(size_t n)
{
    cout << endl;
    cout << "Pattern 11:-" << endl;
    for (size_t i = 0; i < n; i++)
    {
        int start = 0;
        if (i % 2 == 0)
        {
            start = 1;
        }
        for (size_t j = 0; j <= i; j++)
        {
            cout << start << " ";
            start = 1 - start;
        }
        cout << endl;
    }
}

void pattern12(size_t n)
{
    cout << endl;
    cout << "Pattern 12:-" << endl;
    for (size_t i = 1; i <= n; i++)
    {
        for (size_t j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        for (size_t j = 1; j <= 2 * (n - i); j++)
        {
            cout << "  ";
        }
        for (size_t j = i; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern13(size_t n)
{
    cout << endl;
    cout << "Pattern 13:-" << endl;
    int count = 1;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j <= i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}

void pattern14(size_t n)
{
    cout << endl;
    cout << "Pattern 14:-" << endl;
    for (size_t i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + i; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void pattern15(size_t n)
{
    cout << endl;
    cout << "Pattern 15:-" << endl;
    for (size_t i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + (n - i - 1); ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void pattern16(size_t n)
{
    cout << endl;
    cout << "Pattern 16:-" << endl;
    for (size_t i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            char ch = 'A' + i;
            cout << ch << " ";
        }
        cout << endl;
    }
}

void pattern17(size_t n)
{
    cout << endl;
    cout << "Pattern 17:-" << endl;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n - i - 1; j++)
        {
            cout << "  ";
        }
        char ch = 'A';
        int breakpoint = (2 * i + 1) / 2;
        for (size_t k = 1; k <= 2 * i + 1; k++)
        {
            cout << ch << " ";
            if (k <= breakpoint)
            {
                ch++;
            }
            else
            {
                ch--;
            }
        }
        cout << endl;
    }
}

void pattern18(size_t n)
{
    cout << endl;
    cout << "Pattern 18:-" << endl;
    char limit = 'A' + (n - 1);
    for (size_t i = 0; i < n; i++)
    {
        for (char ch = limit - i; ch <= 'E'; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void pattern19(size_t n)
{
    cout << endl;
    cout << "Pattern 19:-" << endl;
    int spaces = 0;

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n - i; j++)
        {
            cout << "* ";
        }
        for (size_t j = 0; j < spaces; j++)
        {
            cout << "  ";
        }
        for (size_t j = 0; j < n - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
        spaces += 2;
    }

    for (size_t i = 0; i < n; i++)
    {
        spaces -= 2;
        for (size_t j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        for (size_t j = 0; j < spaces; j++)
        {
            cout << "  ";
        }
        for (size_t j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern20(int n)
{
    cout << endl;
    cout << "Pattern 20:-" << endl;
    int spaces = 2 * n - 2;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i;
        if (i > n)
            stars = 2 * n - i;
        for (int j = 1; j <= stars; j++)
        {
            cout << "* ";
        }
        for (int j = 1; j <= spaces; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= stars; j++)
        {
            cout << "* ";
        }
        cout << endl;
        if (i < n)
            spaces -= 2;
        else
            spaces += 2;
    }
}

void pattern21(int n)
{
    cout << endl;
    cout << "Pattern 21:-" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}

void pattern22(int n)
{
    cout << endl;
    cout << "Pattern 22:-" << endl;
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            int top = i;
            int bottom = j;
            int right = (2 * n - 2) - j;
            int left = (2 * n - 2) - i;
            cout << (n - min(min(top, bottom), min(left, right))) << " ";
        }
        cout << endl;
    }
}

int main()
{

    int n = 5;

    pattern1(n);
    pattern2(n);
    pattern3(n);
    pattern4(n);
    pattern5(n);
    pattern6(n);
    pattern7(n);
    pattern8(n);
    pattern9(n);
    pattern10(n);
    pattern11(n);
    pattern12(n);
    pattern13(n);
    pattern14(n);
    pattern15(n);
    pattern16(n);
    pattern17(n);
    pattern18(n);
    pattern19(n);
    pattern20(n);
    pattern21(n);
    pattern22(n);

    return 0;
}