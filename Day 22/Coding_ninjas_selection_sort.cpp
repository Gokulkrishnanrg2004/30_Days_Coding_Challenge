#include <bits/stdc++.h> 
void selectionSort(vector<int>& arr, int n)
{   
    int key;
    int len = arr.size();
    for(int i=0;i<len-1;i++)
    {
        key = i;
        for(int j=i+1;j<len;j++)
        {
            if(arr[key] > arr[j])
            {
                key = j;
            }
        }
        swap(arr[key],arr[i]);
    }
}
