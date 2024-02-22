#include <iostream>
#include <vector>

bool search(const std::vector<int> &nums, int target)
{
    int low = 0;
    int high = nums.size() - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target)
        {
            return true;
        }

        if (nums[low] == nums[mid] && nums[mid] == nums[high])
        {
            low++;
            high--;
        }
        else if (nums[low] <= nums[mid])
        {
            if (nums[low] <= target && target <= nums[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else
        {
            if (nums[mid] <= target && target <= nums[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }

    return false;
}

int main()
{
    // Test Case 1
    std::vector<int> nums1 = {2, 5, 6, 0, 0, 1, 2};
    int target1 = 0;
    std::cout << "Test Case 1 - Array: ";
    for (int num : nums1)
    {
        std::cout << num << " ";
    }
    std::cout << "\nTarget: " << target1 << "\nResult: " << std::boolalpha << search(nums1, target1) << "\n";

    // Test Case 2
    std::vector<int> nums2 = {2, 5, 6, 0, 0, 1, 2};
    int target2 = 3;
    std::cout << "\nTest Case 2 - Array: ";
    for (int num : nums2)
    {
        std::cout << num << " ";
    }
    std::cout << "\nTarget: " << target2 << "\nResult: " << std::boolalpha << search(nums2, target2) << "\n";

    // Test Case 3
    std::vector<int> nums3 = {1, 1, 1, 3, 1};
    int target3 = 3;
    std::cout << "\nTest Case 3 - Array: ";
    for (int num : nums3)
    {
        std::cout << num << " ";
    }
    std::cout << "\nTarget: " << target3 << "\nResult: " << std::boolalpha << search(nums3, target3) << "\n";

    // Test Case 4
    std::vector<int> nums4 = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1};
    int target4 = 0;
    std::cout << "\nTest Case 4 - Array: ";
    for (int num : nums4)
    {
        std::cout << num << " ";
    }
    std::cout << "\nTarget: " << target4 << "\nResult: " << std::boolalpha << search(nums4, target4) << "\n";

    return 0;
}
