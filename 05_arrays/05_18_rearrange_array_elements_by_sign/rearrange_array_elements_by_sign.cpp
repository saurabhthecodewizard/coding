#include<bits/stdc++.h>

using namespace std;

vector<int> rearrangeBySign(vector<int> &arr) {
    int size = arr.size();

    vector<int> result(size);

    int positive = 0;
    int negative = 1;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            result[negative] = arr[i];
            negative += 2;
        }
        else
        {
            result[positive] = arr[i];
            positive += 2;
        }
    }
    

    return result;
}

int main() {
    vector<int> arr = { 3, 1, -2, -5, 2, -4 };
    int n = arr.size();
    cout << "Values:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    vector<int> result = rearrangeBySign(arr);
    cout << "Rearranged Values:" << endl;
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }

    return 0;
}