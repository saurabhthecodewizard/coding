#include<vector>
#include<iostream>

using namespace std;

int singleNumber(vector<int> &nums) {
    int xorResult = 0;

    for (size_t i = 0; i < nums.size(); i++)
    {
        xorResult ^= nums[i];
    }
    
    return xorResult;
}

int main()
{
    vector<int> arr = {4, 1, 2, 1, 2};

    cout << "Elements:- " << endl;
    for (size_t i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int result = singleNumber(arr);
    cout << "The single element is: " << result << endl;
    return 0;
}