#include <iostream>
#include <vector>

int searchInsert(const std::vector<int> &nums, int target)
{
    int low = 0;
    int high = nums.size() - 1;
    int result = nums.size();
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] >= target)
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
    std::vector<int> arr1 = {1, 3, 5, 6};
    int target1 = 5;
    std::cout << "Test Case 1:" << std::endl;
    printArray(arr1);
    std::cout << "Insert Position for " << target1 << ": " << searchInsert(arr1, target1) << std::endl; // Output should be 2

    // Test Case 2: Target found at the beginning
    std::vector<int> arr2 = {1, 3, 5, 6};
    int target2 = 2;
    std::cout << "\nTest Case 2:" << std::endl;
    printArray(arr2);
    std::cout << "Insert Position for " << target2 << ": " << searchInsert(arr2, target2) << std::endl; // Output should be 1

    // Test Case 3: Target found at the end
    std::vector<int> arr3 = {1, 3, 5, 6};
    int target3 = 7;
    std::cout << "\nTest Case 3:" << std::endl;
    printArray(arr3);
    std::cout << "Insert Position for " << target3 << ": " << searchInsert(arr3, target3) << std::endl; // Output should be 4

    // Test Case 4: Target not found
    std::vector<int> arr4 = {1, 3, 5, 6};
    int target4 = 0;
    std::cout << "\nTest Case 4:" << std::endl;
    printArray(arr4);
    std::cout << "Insert Position for " << target4 << ": " << searchInsert(arr4, target4) << std::endl; // Output should be 0

    return 0;
}
