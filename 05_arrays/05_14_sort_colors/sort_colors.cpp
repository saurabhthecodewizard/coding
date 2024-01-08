#include <iostream>
#include <vector>

using namespace std;

void sortColors(vector<int> &nums)
{
    int red = 0;
    int white = 0;
    int blue = nums.size() - 1;

    while (white <= blue)
    {
        if (nums[white] == 0)
        {
            swap(nums[white++], nums[red++]);
        }
        else if (nums[white] == 1)
        {
            white++;
        }
        else
        {
            swap(nums[white], nums[blue--]);
        }
    }
}

int main()
{
    vector<int> arr = { 0, 2, 1, 2, 0, 1 };
    int n = arr.size();
    cout << "Before sorting:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    sortColors(arr);
    cout << endl;
    cout << "After sorting:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}