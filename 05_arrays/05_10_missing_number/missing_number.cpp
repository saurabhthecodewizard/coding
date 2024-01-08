#include<iostream>
#include<vector>

using namespace std;

int missingNumber(vector<int> &nums) {
    int xor1 = 0;
    int xor2 = 0;
    int n = nums.size();

    for (size_t i = 0; i < n; i++)
    {
        xor1 = xor1 ^ nums[i];
        xor2 = xor2 ^ (i + 1);
    }

    return xor1 ^ xor2;
}

int main() {
    vector<int> nums = { 9, 6, 4, 2, 3, 5, 7, 0, 1 };

    cout << "Elements:- " << endl;
    for (size_t i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    int result = missingNumber(nums);
    cout << "The missing number is: " << result << endl;
    return 0;
}