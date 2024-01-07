#include<bits/stdc++.h>

using namespace std;

int findMax(int arr[], int n) {
    int max = arr[0];
    for (size_t i = 1; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    
    return max;
}

int main() {
    int arr[] = { 2, 5, 1, 3, 0 };
    int n = 5;

    cout << "Elements:- " << endl;
    for (size_t i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    cout << "Max: " << findMax(arr, n) << endl;
}