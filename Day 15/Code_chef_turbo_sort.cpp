/* Given a list of numbers, you have to sort them in non decreasing order.

Input Format
The first line contains a single integer, N, denoting the number of integers in the list.
The next N lines contain a single integer each, denoting the elements of the list.
Output Format
Output N lines, containing one integer each, in non-decreasing order. */

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}
