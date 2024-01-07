#include <bits/stdc++.h>

using namespace std;

void printArray(int arr[], int n)
{
    for (size_t i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void bubble_sort_recursive(int arr[], int n)
{
    if (n == 1)
    {
        return;
    }
    
    for (size_t i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i+1])
        {
            swap(arr[i], arr[i+1]);
        }
    }
    
    bubble_sort_recursive(arr, n-1);
}

int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before:-" << endl;
    printArray(arr, n);
    bubble_sort_recursive(arr, n);
    cout << endl;
    cout << "After:-" << endl;
    printArray(arr, n);
}