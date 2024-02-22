#include <iostream>
#include <vector>

using namespace std;

int search(const vector<int>& nums, int target) {
    int low = 0;
    int high = nums.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            return mid;
        } else if (nums[low] <= nums[mid]) {
            if (nums[low] <= target && target <= nums[mid]) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        } else {
            if (nums[mid] <= target && target <= nums[high]) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
    }
    return -1;
}

int main() {
    // Test Case 1
    vector<int> nums1 = {4, 5, 6, 7, 0, 1, 2};
    int target1 = 0;
    cout << "Test Case 1 - Array: ";
    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl;
    cout << "Target: " << target1 << endl;
    cout << "Index: " << search(nums1, target1) << endl;

    // Test Case 2
    vector<int> nums2 = {4, 5, 6, 7, 0, 1, 2};
    int target2 = 3;
    cout << "\nTest Case 2 - Array: ";
    for (int num : nums2) {
        cout << num << " ";
    }
    cout << endl;
    cout << "Target: " << target2 << endl;
    cout << "Index: " << search(nums2, target2) << endl;

    // Test Case 3
    vector<int> nums3 = {1};
    int target3 = 0;
    cout << "\nTest Case 3 - Array: ";
    for (int num : nums3) {
        cout << num << " ";
    }
    cout << endl;
    cout << "Target: " << target3 << endl;
    cout << "Index: " << search(nums3, target3) << endl;

    // Test Case 4
    vector<int> nums4 = {4, 5, 6, 7, 8, 1, 2, 3};
    int target4 = 8;
    cout << "\nTest Case 4 - Array: ";
    for (int num : nums4) {
        cout << num << " ";
    }
    cout << endl;
    cout << "Target: " << target4 << endl;
    cout << "Index: " << search(nums4, target4) << endl;

    return 0;
}
