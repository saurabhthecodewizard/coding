#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> threesum(vector<int> &nums) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> result;

    for (int i = 0; i < nums.size() - 2; i++)
    {
        if (i > 0 && nums[i] == nums[i-1])
        {
            continue;
        }
        
        int low = i + 1;
        int high = nums.size() - 1;

        while (low < high)
        {
            int sum = nums[i] + nums[low] + nums[high];
            if (sum < 0)
            {
                low++;
            }
            else if (sum > 0)
            {
                high--;
            }
            else
            {
                vector<int> indices = { nums[i], nums[low], nums[high] };
                result.push_back(indices);

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
    
    return result;
}

int main() {
    vector<int> arr = { -1, 0, 1, 2, -1, -4};
    int n = arr.size();
    vector<vector<int>> ans = threesum(arr);
    for (auto it : ans) {
        cout << "[";
        for (auto i : it) {
            cout << i << " ";
        }
        cout << "] ";
    }
    cout << "\n";

    return 0;
}