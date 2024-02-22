#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>

using namespace std;

int findMin(const vector<int> &nums)
{
    int low = 0;
    int high = nums.size() - 1;
    int result = INT_MAX;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (nums[low] <= nums[mid])
        {
            result = min(result, nums[low]);
            low = mid + 1;
        }
        else
        {
            result = min(result, nums[mid]);
            high = mid - 1;
        }
    }

    return result;
}

int main()
{
    // Test Case 1
    vector<int> nums1 = {3, 4, 5, 1, 2};
    cout << "Test Case 1 - Array: ";
    for (int num : nums1)
    {
        cout << num << " ";
    }
    cout << "\nMinimum Element: " << findMin(nums1) << "\n";

    // Test Case 2
    vector<int> nums2 = {4, 5, 6, 7, 0, 1, 2};
    cout << "\nTest Case 2 - Array: ";
    for (int num : nums2)
    {
        cout << num << " ";
    }
    cout << "\nMinimum Element: " << findMin(nums2) << "\n";

    // Test Case 3
    vector<int> nums3 = {11, 13, 15, 17};
    cout << "\nTest Case 3 - Array: ";
    for (int num : nums3)
    {
        cout << num << " ";
    }
    cout << "\nMinimum Element: " << findMin(nums3) << "\n";

    // Test Case 4
    vector<int> nums4 = {5, 5, 5, 5, 5};
    cout << "\nTest Case 4 - Array: ";
    for (int num : nums4)
    {
        cout << num << " ";
    }
    cout << "\nMinimum Element: " << findMin(nums4) << "\n";

    return 0;
}
