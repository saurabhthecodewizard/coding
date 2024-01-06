#include <bits/stdc++.h>

using namespace std;

void print_1_to_n(int i, int n)
{
    if (i > n)
    {
        return;
    }

    cout << i << endl;
    print_1_to_n(i + 1, n);
}

int main()
{
    int num = 5;
    print_1_to_n(1, num);
}