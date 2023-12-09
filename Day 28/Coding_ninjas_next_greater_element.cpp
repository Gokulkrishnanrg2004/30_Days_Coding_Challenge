#include <bits/stdc++.h> 
vector<int> nextGreaterElement(vector<int>& arr, int n)
{
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        int flag=0;
        for(int j=i+1;j<n;j++)
        {
            if(i==n-1)
            {
                ans.push_back(-1);
                break;
            }
            if(arr[i] < arr[j])
            {
                ans.push_back(arr[j]);
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            ans.push_back(-1);
        }
    }
    return ans;
}
