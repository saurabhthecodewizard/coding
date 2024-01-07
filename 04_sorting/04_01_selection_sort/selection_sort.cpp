#include <bits/stdc++.h>

using namespace std;

void printArray(int arr[], int n)
{
    for (size_t i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void selection_sort(int arr[], int n)
{
    for (size_t i = 0; i < n - 1; i++)
    {
        for (size_t j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
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
    selection_sort(arr, n);
    cout << "After:-" << endl;
    printArray(arr, n);
}