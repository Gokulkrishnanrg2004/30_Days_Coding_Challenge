#include <bits/stdc++.h> 
long long evenSumTillN(int n) 
{
    int sum=0;
    for(int i=2;i<=n;i+=2)
    {
        sum+=i;
    }
    return sum;
}
