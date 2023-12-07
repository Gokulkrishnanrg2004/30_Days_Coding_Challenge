#include <bits/stdc++.h>
vector<vector<int>> pairSum(vector<int> &arr, int s)
{
   sort(arr.begin(), arr.end());
   vector<vector<int>> ans;
   for(int i=0; i<arr.size()-1; i++)
   {
      for(int j=i+1; j<arr.size(); j++)
      {
         if(arr[i] + arr[j] == s)
         {
           ans.push_back({arr[i], arr[j]});
         }
      }
   }
   return ans;
}
