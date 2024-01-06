#include<bits/stdc++.h>

using namespace std;

void print_n_times(int i, int n) {
    if (i > n) {
        return;
    }

    cout << "Name" << endl;
    print_n_times(i + 1, n);
}

int main() {
    int num = 5;
    print_n_times(1, num);
}