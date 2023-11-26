/* 

You are given an integer 'N'. Your task is to print a pattern with the following
description The pattern will consist of 'N' lines.
For 1 <= '' <= 'N' 'i'th line consists of a string of 'N' + 1 - 'i' '*' characters.
For example:
If 'N' is 5 then the pattern will be.
*****
****
***
**
*

*/

#include <bits/stdc++.h> 
vector<string> printPatt(int n)
{
    vector<string>ans;
    for(int i=0;i<n;i++)
    {
        string s;
        for(int j=0;j<n-i;j++)
        {
            s+='*';
        }
        ans.push_back(s);
    }
    return ans;
}
