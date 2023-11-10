#include <bits/stdc++.h> 
#include <iostream>
using namespace std;
int countBits(int a[32])
{
    int count=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]==1)
        {
            count++;
        }
    }
    return count;
}
int main() {
    int n;
    cin >> n;
    int a[32];
    for(int i=0;i>0;i++)
    {
        a[i]=n%2;
        n=n/2;
    }
    cout<<countBits(a);
    return 0;
}
