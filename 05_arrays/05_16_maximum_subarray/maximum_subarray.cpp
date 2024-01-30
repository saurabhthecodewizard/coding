#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int maximumSubarray(vector<int>& nums) {
    int result = INT_MIN;
    int sum = 0;
    int size = nums.size();

    for (int i = 0; i < size; i++)
    {
        sum += nums[i];

        result = max(result, sum);

        if (sum < 0)
        {
            sum = 0;
        }
    }
    
    return result;
}

int main() {
    vector<int> arr = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };
    int n = arr.size();
    cout << "Before sorting:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    int result = maximumSubarray(arr);
    cout << "The maximum subarray sum is: " << result << endl;
    return 0;
}