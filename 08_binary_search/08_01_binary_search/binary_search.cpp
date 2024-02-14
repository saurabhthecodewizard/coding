#include <iostream>
#include <vector>

int search(const std::vector<int> &arr, int target)
{
    int low = 0;
    int high = arr.size() - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

void printArray(const std::vector<int> &arr)
{
    std::cout << "Array: [";
    for (size_t i = 0; i < arr.size(); ++i)
    {
        std::cout << arr[i];
        if (i < arr.size() - 1)
        {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;
}

int main()
{
    // Test Case 1: Target found in the middle
    std::vector<int> arr1 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int target1 = 5;
    std::cout << "Test Case 1:" << std::endl;
    printArray(arr1);
    std::cout << "Index of " << target1 << ": " << search(arr1, target1) << std::endl; // Output should be 4

    // Test Case 2: Target found at the beginning
    std::vector<int> arr2 = {10, 20, 30, 40, 50};
    int target2 = 10;
    std::cout << "\nTest Case 2:" << std::endl;
    printArray(arr2);
    std::cout << "Index of " << target2 << ": " << search(arr2, target2) << std::endl; // Output should be 0

    // Test Case 3: Target found at the end
    std::vector<int> arr3 = {100, 200, 300, 400, 500};
    int target3 = 500;
    std::cout << "\nTest Case 3:" << std::endl;
    printArray(arr3);
    std::cout << "Index of " << target3 << ": " << search(arr3, target3) << std::endl; // Output should be 4

    // Test Case 4: Target not found
    std::vector<int> arr4 = {5, 10, 15, 20, 25};
    int target4 = 12;
    std::cout << "\nTest Case 4:" << std::endl;
    printArray(arr4);
    std::cout << "Index of " << target4 << ": " << search(arr4, target4) << std::endl; // Output should be -1

    return 0;
}
