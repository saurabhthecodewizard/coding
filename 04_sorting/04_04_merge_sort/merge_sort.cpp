#include <bits/stdc++.h>

using namespace std;

void printArray(vector<int> &arr, int n)
{
    for (size_t i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> aux;

    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            aux.push_back(arr[left]);
            left++;
        }
        else
        {
            aux.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid)
    {
        aux.push_back(arr[left]);
        left++;
    }

    while (right <= high)
    {
        aux.push_back(arr[right]);
        right++;
    }

    for (size_t i = low; i <= high; i++)
    {
        arr[i] = aux[i - low];
    }
    
}

void mergeSort(vector<int> &arr, int low, int high)
{
    if (low >= high) {
        return;
    }
    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int main()
{
    vector<int> arr = {13, 46, 24, 52, 20, 9};
    int n = 6;

    cout << "Before:-" << endl;
    printArray(arr, n);
    mergeSort(arr, 0, n - 1);
    cout << endl;
    cout << "After:-" << endl;
    printArray(arr, n);
}