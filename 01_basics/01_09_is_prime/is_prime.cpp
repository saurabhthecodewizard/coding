#include <bits/stdc++.h>

using namespace std;

bool isPrime(int N)
{
    for (int i = 2; i < sqrt(N); i++)
    {
        if (N % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int num = 23;

    cout << "Is " << num << " a prime number: " << isPrime(num) << endl;
}