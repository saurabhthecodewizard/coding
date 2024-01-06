#include<bits/stdc++.h>

using namespace std;

int totalSum(int i, int sum) {
    if (i < 1) {
        return sum;
    }

    return totalSum(i - 1, sum + i);
}

int main() {
    int num = 5;
    cout << "Sum of first " << num << " numbers: " << totalSum(num, 0) << endl;
}