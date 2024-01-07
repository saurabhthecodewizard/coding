#include <bits/stdc++.h>

using namespace std;

void printArray(int arr[], int n)
{
    for (size_t i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void insertionSortRecursive(int arr[], int n, int length)
{
    if (length <= n)
    {
        return;
    }

    for (size_t j = n; j > 0; j--)
    {
        if (arr[j] < arr[j - 1])
        {
            swap(arr[j], arr[j - 1]);
        }
    }

    insertionSortRecursive(arr, n + 1, length);
}

int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before:-" << endl;
    printArray(arr, n);
    insertionSortRecursive(arr, 0, n);
    cout << endl;
    cout << "After:-" << endl;
    printArray(arr, n);
}