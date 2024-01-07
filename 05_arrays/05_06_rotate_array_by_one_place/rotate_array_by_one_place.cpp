#include <bits/stdc++.h>

using namespace std;

void rotateByOne(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;
}

void print(int arr[], int n)
{
    for (size_t i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Elements:-" << endl;
    print(arr, n);

    rotateByOne(arr, n);

    cout << "Rotated by one place:-" << endl;
    print(arr, n);
}