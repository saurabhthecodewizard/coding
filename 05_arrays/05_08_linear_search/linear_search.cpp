#include <bits/stdc++.h>

using namespace std;

int linearSearch(vector<int> &nums, int key) {
    for (size_t i = 0; i < nums.size(); i++)
    {
        if (nums[i] == key)
        {
            return i;
        }
    }
    return -1;
}

void print(vector<int>& nums) {
    for (size_t i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    int key = 3;

    cout << "Elements:-" << endl;
    print(nums);
    cout << "The elements " << key << " is at index: " << linearSearch(nums, key) << endl;
}