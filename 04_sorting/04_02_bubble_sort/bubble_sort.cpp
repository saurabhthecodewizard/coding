#include <bits/stdc++.h>

using namespace std;

void printArray(int arr[], int n)
{
    for (size_t i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void bubble_sort(int arr[], int n)
{
    bool flag = true;
    for (size_t i = 0; i < n - 1 && flag; i++)
    {
        flag = false;
        for (size_t j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                flag = true;
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
    bubble_sort(arr, n);
    cout << endl;
    cout << "After:-" << endl;
    printArray(arr, n);
}