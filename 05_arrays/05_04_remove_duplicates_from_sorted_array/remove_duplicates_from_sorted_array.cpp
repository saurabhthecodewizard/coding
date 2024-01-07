#include <bits/stdc++.h>

using namespace std;

void print(vector<int>& nums) {
    for (size_t i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
}

int removeDuplicates(vector<int>& nums) {
    int j = 1;
    for (size_t i = 1; i < nums.size(); i++)
    {
        if (nums[i] != nums[i-1])
        {
            nums[j++] = nums[i];
        }
    }
    return j;
}

int main() {
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

    cout << "Elements:-" << endl;
    print(nums);
    int nonDuplicates = removeDuplicates(nums);
    cout << endl;
    cout << "No. of non duplicates: " << nonDuplicates << endl;
    
    for (size_t i = 0; i < nonDuplicates; i++)
    {
        cout << nums[i] << " ";
    }
    
}