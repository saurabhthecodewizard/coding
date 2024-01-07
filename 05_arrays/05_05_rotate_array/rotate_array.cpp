#include <bits/stdc++.h>

using namespace std;

void reverse(vector<int> &nums, int low, int high) {
    int i = low;
    int j = high;
    while (i < j)
    {
        swap(nums[i++], nums[j--]);
    }
}

void rotate(vector<int> &nums, int k)
{
    int length = nums.size();
    k = k % length;
    if (k < 0) {
        k = k + length;
    }

    reverse(nums, 0, k - 1);
    reverse(nums, length - k, length - 1);
    reverse(nums, 0, length - 1);
}

void print(vector<int>& nums) {
    for (size_t i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> nums = { 1, 2, 3, 4, 5, 6, 7 };
    int k = 3;
    cout << "Elements:-" << endl;
    print(nums);
    
    rotate(nums, k);
    
    cout << "Rotated by " << k << ":-" << endl;
    print(nums);
}