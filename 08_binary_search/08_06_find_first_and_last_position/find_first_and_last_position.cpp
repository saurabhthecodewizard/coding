#include <iostream>
#include <vector>

using namespace std;

vector<int> searchRange(const vector<int> &nums, int target)
{
    vector<int> result = {-1, -1};
    int low = 0, high = nums.size() - 1;

    // Search for the first occurrence of the target
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] >= target)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }

        if (target == nums[mid])
        {
            result[0] = mid;
        }
    }

    low = 0;
    high = nums.size() - 1;

    // Search for the last occurrence of the target
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] <= target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }

        if (target == nums[mid])
        {
            result[1] = mid;
        }
    }

    return result;
}

int main()
{
    // Test cases
    vector<int> nums1 = {5, 7, 7, 8, 8, 10};
    int target1 = 8;
    cout << "Test Case 1 - Array: ";
    for (int num : nums1)
    {
        cout << num << " ";
    }
    cout << endl;
    cout << "Target: " << target1 << endl;
    vector<int> result1 = searchRange(nums1, target1);
    cout << "Result: [" << result1[0] << ", " << result1[1] << "]" << endl;

    // Test Case 2
    vector<int> nums2 = {5, 7, 7, 8, 8, 10};
    int target2 = 6;
    cout << "\nTest Case 2 - Array: ";
    for (int num : nums2)
    {
        cout << num << " ";
    }
    cout << endl;
    cout << "Target: " << target2 << endl;
    vector<int> result2 = searchRange(nums2, target2);
    cout << "Result: [" << result2[0] << ", " << result2[1] << "]" << endl;

    // Test Case 3
    vector<int> nums3 = {1};
    int target3 = 1;
    cout << "\nTest Case 3 - Array: ";
    for (int num : nums3)
    {
        cout << num << " ";
    }
    cout << endl;
    cout << "Target: " << target3 << endl;
    vector<int> result3 = searchRange(nums3, target3);
    cout << "Result: [" << result3[0] << ", " << result3[1] << "]" << endl;

    // Test Case 4
    vector<int> nums4 = {2, 2};
    int target4 = 2;
    cout << "\nTest Case 4 - Array: ";
    for (int num : nums4)
    {
        cout << num << " ";
    }
    cout << endl;
    cout << "Target: " << target4 << endl;
    vector<int> result4 = searchRange(nums4, target4);
    cout << "Result: [" << result4[0] << ", " << result4[1] << "]" << endl;

    return 0;
}
