#include<bits/stdc++.h>

using namespace std;

vector<int> majorityElement(vector<int>& nums) {
    vector<int> result;
    unordered_map<int, int> mp;
    int size = nums.size();
    int threshold = size / 3;

    for (int i = 0; i < size; i++)
    {
        mp[nums[i]]++;
    }
    

    for (auto pair : mp) {
        int element = pair.first;
        int count = pair.second;

        if (count > threshold)
        {
            result.push_back(element);
        }
    }

    return result;
}

int main()
{
    vector<int> arr = {11, 33, 33, 5, 33, 11};
    vector<int> ans = majorityElement(arr);
    cout << "The majority elements are: ";
    for (auto it : ans)
        cout << it << " ";
    cout << "\n";
    return 0;
}