#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> fourSum(vector<int> &nums, int target)
{
    sort(nums.begin(), nums.end());
    int size = nums.size();
    vector<vector<int>> result;

    for (int i = 0; i < size - 3; i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
        {
            continue;
        }
        for (int j = i + 1; j < size - 2; j++)
        {
            if (j > i + 1 && nums[j] == nums[j - 1])
            {
                continue;
            }
            int low = j + 1;
            int high = size - 1;

            while (low < high)
            {
                long long sum = static_cast<long long>(nums[i]) + nums[j] + nums[low] + nums[high];

                if (sum < target)
                {
                    low++;
                }
                else if (sum > target)
                {
                    high--;
                }
                else
                {
                    vector<int> combination = {nums[i], nums[j], nums[low], nums[high]};
                    result.push_back(combination);

                    while (low + 1 < high && nums[low] == nums[low + 1])
                    {
                        low++;
                    }
                    while (high - 1 > low && nums[high] == nums[high - 1])
                    {
                        high--;
                    }

                    low++;
                    high--;
                }
            }
        }
    }

    return result;
}

int main() {
    vector<int> nums1 = {1, 0, -1, 0, -2, 2};
    int target1 = 0;
    vector<vector<int>> result1 = fourSum(nums1, target1);
    cout << "Example 1:\n";
    for (const auto& quadruplet : result1) {
        cout << "[";
        for (int num : quadruplet) {
            cout << num << " ";
        }
        cout << "]\n";
    }

    vector<int> nums2 = {2, 2, 2, 2, 2};
    int target2 = 8;
    vector<vector<int>> result2 = fourSum(nums2, target2);
    cout << "\nExample 2:\n";
    for (const auto& quadruplet : result2) {
        cout << "[";
        for (int num : quadruplet) {
            cout << num << " ";
        }
        cout << "]\n";
    }

    return 0;
}