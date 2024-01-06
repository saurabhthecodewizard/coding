#include <bits/stdc++.h>

using namespace std;

void printAllDivisors(int n)
{
    cout << "The Divisors of " << n << " are: ";
    for (size_t i = 1; i < sqrt(n) + 1; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
            if (i != n / i)
            {
                cout << n / i << " ";
            }
        }
    }
}

int main()
{
    int num = 36;

    printAllDivisors(num);
}