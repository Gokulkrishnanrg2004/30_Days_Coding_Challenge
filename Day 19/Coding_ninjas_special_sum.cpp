/*

You have been given an array/list 'arr' of length 'N', which contains single digit elements at every index. Your task is to return the sum of all elements of the array. But the final sum should also be a single digit.

To keep the output single digit - you need to keep adding the digits of the output number till a single digit is left.

For example:

For the given array [5, 8, 4, 9]

The sum of the elements of the array will be 5+8+4+9=26. Since 26 is not a single-digit number, we will again take the sum of the digits of 26. 2+6=8,

Now 8 is a single-digit number. So we will stop here and return 8.

*/

#include <bits/stdc++.h> 
int specialSum(vector<int>& arr, int n)
{
    int sum=0;
    int sum1=0;
    int len=arr.size();
    for(int i=0;i<len;i++)
    {
        sum+=arr[i];
    }
    int q,r,rev=0;
    if(sum<=10)
    {
        return sum;
    }
    else
    {
        while (sum > 0) 
        {
          q = sum / 10;
          r = sum % 10;
          rev = rev + r;
          sum = q;
        }
        return rev;
    }
}
