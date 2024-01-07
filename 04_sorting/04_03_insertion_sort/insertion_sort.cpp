#include <bits/stdc++.h>

using namespace std;

void printArray(int arr[], int n)
{
    for (size_t i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void insertionSort(int arr[], int n)
{
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = i; j > 0; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                swap(arr[j], arr[j - 1]);
            }
        }
    }
}

int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before:-" << endl;
    printArray(arr, n);
    insertionSort(arr, n);
    cout << endl;
    cout << "After:-" << endl;
    printArray(arr, n);
}