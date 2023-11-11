#include <bits/stdc++.h> 

int frogJump(int n, vector<int> &heights)

{
    if(n==0)
    return 0;
    
    int a[n+1];
    a[0]=0;
    a[1]=0;
    a[2] = abs(heights[1] - heights[0]);
    for(int i=3;i<=n;i++){
        a[i]=min(a[i-1]+abs(heights[i-1]-heights[i-2]),a[i-2]+abs(heights[i-1]-heights[i-3]));
    }
    return a[n];

}
