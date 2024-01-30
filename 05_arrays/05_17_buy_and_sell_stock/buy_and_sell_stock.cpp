#include<bits/stdc++.h>

using namespace std;

int maxProfit(vector<int> &arr) {
    int size = arr.size();
    if (size == 0)
    {
        return 0;
    }
    
    int minimum = arr[0];
    int profit = 0;

    for (int i = 1; i < size; i++)
    {
        int current_profit = arr[i] - minimum;
        profit = max(profit, current_profit);
        minimum = min(minimum, arr[i]);
    }
    
    return profit;
}

int main() {

    vector<int> arr = { 7, 1, 5, 3, 6, 4 };
    int n = arr.size();
    cout << "Values:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    int result = maxProfit(arr);
    cout << "The maximum profit is: " << result << endl;

    return 0;
}