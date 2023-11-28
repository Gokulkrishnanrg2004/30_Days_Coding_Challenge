#include <bits/stdc++.h> 
void insertionSort(int n, vector<int> &arr)
{
    int a,i,j;
    for(i=1;i<n;i++)
    {
        a=arr[i];
        for(j=i-1;j>=0 && arr[j]>a ;j--)
        {
            arr[j+1] = arr[j];
        }
        arr[j+1]=a;
    }
}
