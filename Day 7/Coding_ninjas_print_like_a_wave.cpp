#include <bits/stdc++.h>
using namespace std;
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    int i, j = 0;
    vector<int> ans;
    while (j < mCols)
    {
        if (j % 2 == 0)
        {
            i = 0;
            while (i < nRows)
            {
                ans.push_back(arr[i][j]);
                i++;
            }
        }
        else
        {
            i = nRows - 1;
            while (i >= 0)
            {
                ans.push_back(arr[i][j]);
                i--;
            }
        }
        j++;
    }
    return ans;
}
