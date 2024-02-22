#include <iostream>
#include <vector>

using namespace std;

int findFloor(const vector<int> &arr, int target)
{
    int low = 0;
    int high = arr.size() - 1;
    int result = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] <= target)
        {
            result = arr[mid];
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return result;
}

int findCeil(const vector<int> &arr, int target)
{
    int low = 0;
    int high = arr.size() - 1;
    int result = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] >= target)
        {
            result = arr[mid];
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return result;
}

int main()
{
    // Test cases
    vector<int> arr1 = {1, 2, 8, 10, 10, 12, 19};
    int target1 = 5;
    cout << "Test Case 1 - Array: ";
    for (int num : arr1)
    {
        cout << num << " ";
    }
    cout << endl;
    cout << "Floor of " << target1 << ": " << findFloor(arr1, target1) << endl;
    cout << "Ceil of " << target1 << ": " << findCeil(arr1, target1) << endl;

    // Test Case 2
    vector<int> arr2 = {1, 2, 8, 10, 10, 12, 19};
    int target2 = 20;
    cout << "\nTest Case 2 - Array: ";
    for (int num : arr2)
    {
        cout << num << " ";
    }
    cout << endl;
    cout << "Floor of " << target2 << ": " << findFloor(arr2, target2) << endl;
    cout << "Ceil of " << target2 << ": " << findCeil(arr2, target2) << endl;

    // Test Case 3
    vector<int> arr3 = {1, 2, 8, 10, 10, 12, 19};
    int target3 = 0;
    cout << "\nTest Case 3 - Array: ";
    for (int num : arr3)
    {
        cout << num << " ";
    }
    cout << endl;
    cout << "Floor of " << target3 << ": " << findFloor(arr3, target3) << endl;
    cout << "Ceil of " << target3 << ": " << findCeil(arr3, target3) << endl;

    // Test Case 4
    vector<int> arr4 = {1, 2, 8, 10, 10, 12, 19};
    int target4 = 10;
    cout << "\nTest Case 4 - Array: ";
    for (int num : arr4)
    {
        cout << num << " ";
    }
    cout << endl;
    cout << "Floor of " << target4 << ": " << findFloor(arr4, target4) << endl;
    cout << "Ceil of " << target4 << ": " << findCeil(arr4, target4) << endl;

    return 0;
}
