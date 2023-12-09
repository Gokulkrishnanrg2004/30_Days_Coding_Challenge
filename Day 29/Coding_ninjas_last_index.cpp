/* Take an array with N elements with possibly duplicate elements as the input. The task is to find the index of the last occurences of the element x in the aarray and
if not present return -1 */

#include <bits/stdc++.h> 
#include <iostream>
using namespace std;
int main() 
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }   
    int find;
    cin>>find;
    int count=0,index=0,flag=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==find)
        {
            index=i;
            flag=1;
        }
    }
    if(flag==1)
    {
        cout<<index;
    }
    else if(flag==0)
    {
        cout<<-1;
    }
    
}
