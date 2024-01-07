#include <bits/stdc++.h>

using namespace std;

bool isSortedAndRotated(int arr[], int n) {
    int count = 0;

    for (size_t i = 1; i < n; i++)
    {
        if (arr[i-1] > arr[i])
        {
            count++;
        }
    }
    
    if (arr[0] < arr[n - 1])
    {
        count++;
    }
    
    return count <= 1;
}

int main() {
    int arr[] = { 3, 4, 5, 1, 2 };
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Elements:-" << endl;
    for (size_t i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Is Sorted: " << isSortedAndRotated(arr, n);
}