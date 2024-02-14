#include <iostream>
#include <vector>

int upperBound(const std::vector<int> &arr, int target)
{
    int low = 0;
    int high = arr.size() - 1;
    int result = high;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] > target)
        {
            result = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return result;
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
    std::vector<int> arr1 = {1, 2, 2, 2, 3, 4, 5};
    int target1 = 2;
    std::cout << "Test Case 1:" << std::endl;
    printArray(arr1);
    std::cout << "Upper Bound of " << target1 << ": " << upperBound(arr1, target1) << std::endl; // Output should be 4

    // Test Case 2: Target found at the beginning
    std::vector<int> arr2 = {5, 10, 10, 15, 20};
    int target2 = 5;
    std::cout << "\nTest Case 2:" << std::endl;
    printArray(arr2);
    std::cout << "Upper Bound of " << target2 << ": " << upperBound(arr2, target2) << std::endl; // Output should be 1

    // Test Case 3: Target found at the end
    std::vector<int> arr3 = {10, 20, 30, 40, 50};
    int target3 = 50;
    std::cout << "\nTest Case 3:" << std::endl;
    printArray(arr3);
    std::cout << "Upper Bound of " << target3 << ": " << upperBound(arr3, target3) << std::endl; // Output should be 4

    // Test Case 4: Target not found
    std::vector<int> arr4 = {5, 10, 15, 20, 25};
    int target4 = 12;
    std::cout << "\nTest Case 4:" << std::endl;
    printArray(arr4);
    std::cout << "Upper Bound of " << target4 << ": " << upperBound(arr4, target4) << std::endl; // Output should be 2

    return 0;
}
