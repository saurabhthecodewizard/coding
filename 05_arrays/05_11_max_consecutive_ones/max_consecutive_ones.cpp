#include <iostream>
#include <vector>

using namespace std;

int maxConsecutiveOnes(vector<int> &nums)
{
    int count = 0;
    int maxCount = 0;

    for (size_t i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 1)
        {
            count++;
        }
        else
        {
            maxCount = max(maxCount, count);
            count = 0;
        }
    }

    return max(maxCount, count);
}

int main()
{
    vector<int> nums = {1, 1, 0, 1, 1, 1};

    cout << "Elements:- " << endl;
    for (size_t i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    int ans = maxConsecutiveOnes(nums);
    cout << "The maximum  consecutive 1's are " << ans;
    return 0;
}