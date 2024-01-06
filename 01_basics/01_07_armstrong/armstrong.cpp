#include <bits/stdc++.h>

using namespace std;

bool armstrong_number(int num) {
    int temp = num;
    int count = 0;
    int sumOfPower = 0;

    while (temp > 0)
    {
        count++;
        temp = temp / 10;
    }
    
    temp = num;
    while (temp != 0)
    {
        int digit = temp % 10;
        sumOfPower += pow(digit, count);
        temp = temp / 10;
    }
    
    return sumOfPower == num;
}

int main() {
    int num = 153;

    cout << "Is " << num << " Armstrong: " << armstrong_number(num) << endl;
}