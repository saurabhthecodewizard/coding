#include<iostream>
#include<vector>

using namespace std;

int majorityElement(vector<int> &nums) {
    int count = 1;
    int element = nums[0];

    for (int i = 1; i < count; i++)
    {
        if (count == 0)
        {
            count++;
            element = nums[i];
        }
        else if (element == nums[i])
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    
    return element;
}

int main()
{
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    int n = arr.size();
    cout << "Before sorting:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    int result = majorityElement(arr);
    cout << "The majority element is: " << result << endl;
    return 0;
}