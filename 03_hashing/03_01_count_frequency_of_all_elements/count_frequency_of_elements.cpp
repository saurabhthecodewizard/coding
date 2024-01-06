#include <bits/stdc++.h>

using namespace std;

void count_frequency_of_elements(int arr[], int n, unordered_map<int, int> &map)
{
    for (int i = 0; i < n; i++)
        map[arr[i]]++;
}

int main()
{
    unordered_map<int, int> map;
    int arr[] = {10, 5, 10, 15, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    count_frequency_of_elements(arr, n, map);

    for (auto x : map)
        cout << x.first << "-> " << x.second << endl;
}