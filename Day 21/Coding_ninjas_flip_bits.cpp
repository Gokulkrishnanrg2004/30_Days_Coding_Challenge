#include <bits/stdc++.h>
int flipBits(int* arr, int n) 
{
    int count=0;
    for(int i=0;i<n;i++)
    {
      if (arr[i] == 0) 
      {
        arr[i] = 1;
      } 
      else 
      {
        arr[i] = -1;
        count++;
      }
    }
    int sum1=arr[0];
    int sum2=arr[0];
    for(int i=1;i<n;i++)
    {
        sum1=max(arr[i],sum1+arr[i]);
        sum2=max(sum1,sum2);
    }
    return max(sum2,0)+count;

}
