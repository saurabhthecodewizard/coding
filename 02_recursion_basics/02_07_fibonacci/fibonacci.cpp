#include <bits/stdc++.h>

using namespace std;

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }

    if (n == 1) {
        return 1;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int num = 7;
    cout << "Fibonacci for: " << num << ": " << fibonacci(num) << endl;
}