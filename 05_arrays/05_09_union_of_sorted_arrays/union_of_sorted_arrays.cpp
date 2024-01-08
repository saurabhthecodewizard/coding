#include <vector>
#include <iostream>

using namespace std;

vector<int> findUnion(int arr1[], int m, int arr2[], int n)
{
    vector<int> result;
    int i = 0;
    int j = 0;

    while (i < m && j < n)
    {
        if (arr1[i] <= arr2[j])
        {
            if (result.size() == 0 || result.back() != arr1[i])
            {
                result.push_back(arr1[i]);
            }
            i++;
        }
        else
        {
            if (result.size() == 0 || result.back() != arr2[j])
            {
                result.push_back(arr2[j]);
            }
            j++;
        }
    }

    while (i < m)
    {
        if (result.back() != arr1[i])
        {
            result.push_back(arr1[i]);
        }
        i++;
    }

    while (j < n)
    {
        if (result.back() != arr1[j])
        {
            result.push_back(arr2[j]);
        }
        j++;
    }

    return result;
}

void print(vector<int> &nums)
{
    for (size_t i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
}

int main()
{
    int m = 10, n = 7;
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[] = {2, 3, 4, 4, 5, 11, 12};
    cout << "Array 1:-  " << endl;
    for (size_t i = 0; i < m; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
    cout << "Array 2:-  " << endl;
    for (size_t i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;

    vector<int> result = findUnion(arr1, m, arr2, n);
    cout << "Union of arr1 and arr2 is  " << endl;
    for (auto &val : result)
        cout << val << " ";
    return 0;
}
