#include <bits/stdc++.h>

using namespace std;

void printArray(vector<int> &arr, int n)
{
    for (size_t i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int partition(vector<int> &arr, int low, int high) {
    int i = low + 1;
    int j = high;

    while (true)
    {
        while (arr[i] < arr[low])
        {
            i++;
            if (i >= high)
            {
                break;
            }
        }
        while (arr[j] > arr[low])
        {
            j--;
            if (j <= low)
            {
                break;
            }
        }
        if (i >= j)
        {
            break;
        }
        
        swap(arr[i], arr[j]);
    }
    
    swap(arr[low], arr[j]);

    return j;
}

void quickSort(vector<int> &arr, int low, int high) {
    if (low >= high)
    {
        return;
    }
    
    int j = partition(arr, low, high);
    quickSort(arr, low, j - 1);
    quickSort(arr, j + 1, high);
}

int main()
{
    vector<int> arr = {13, 46, 24, 52, 20, 9};
    int n = 6;

    cout << "Before:-" << endl;
    printArray(arr, n);
    quickSort(arr, 0, n - 1);
    cout << endl;
    cout << "After:-" << endl;
    printArray(arr, n);
}