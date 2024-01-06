#include<iostream>

using namespace std;

void reverseArray(int start, int end, int arr[]) {
    if (start < end) {
        swap(arr[start], arr[end]);
        reverseArray(start + 1, end - 1, arr);
    }
}

int main() {
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};

    cout << "Before:-" << endl;
    for (size_t i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    reverseArray(0, n - 1, arr);
    
    cout << endl;
    cout << "After:-" << endl;
    for (size_t i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
}