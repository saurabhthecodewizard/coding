#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> uMap;

    for (int i = 0; i < nums.size(); i++)
    {
        int complement = target - nums[i];
        if (uMap.find(complement) != uMap.end())
        {
            return {uMap[complement], i};
        }
        uMap[nums[i]] = i;
    }

    return {-1, -1};
}

int main()
{
    int n = 5;
    vector<int> arr = {2, 6, 5, 8, 11};

    cout << "Elements:- " << endl;
    for (size_t i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    int target = 14;
    cout << "Target: " << target << endl;

    vector<int> result = twoSum(arr, target);
    cout << "This is the answer for variant 2: [" << result[0] << ", " << result[1] << "]" << endl;
    return 0;
}