#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> generate(int rows) {
    vector<vector<int>> result;
    result.push_back({1});
    for (int i = 1; i < rows; i++)
    {
        vector<int> row(i+1, 1);
        for (int j = 1; j < i; j++)
        {
            row[j] = result[i-1][j-1] + result[i-1][j];
        }
        result.push_back(row);
    }
    return result;
}


int main() {
    int n = 5;
    vector<vector<int>> ans = generate(n);
    for (auto it : ans) {
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout << endl;
    }
    return 0;
}
