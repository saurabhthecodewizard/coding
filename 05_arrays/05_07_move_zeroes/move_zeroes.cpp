#include <bits/stdc++.h>

using namespace std;

void moveZeroes(vector<int>& nums) {
    int n = nums.size();
    int j = 0;
    for (size_t i = 0; i < n; i++)
    {
        if (nums[i] != 0)
        {
            swap(nums[i], nums[j++]);
        }
    }
}

int main() {
    vector<int> nums = {0, 1, 0, 3, 12};
    int n = nums.size();

    cout << "Elements:- " << endl;
    for (size_t i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    moveZeroes(nums);

    cout << "Zeroes moved:- " << endl;
    for (size_t i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
}