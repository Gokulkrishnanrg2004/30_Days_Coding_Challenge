/* There is a river which flows in one direction. One day, the river has 'N' number of fishes. 
You are given an array 'FISHES' of integers representing the size of 'N' fishes. The fishes are present in the river from left to right(0th index represents the size of the leftmost fish). 
As the river flows from left to right so the fishes also swim from left to right. The fishes are of different sizes and have different speeds. The larger fishes are faster than the smaller fishes. 
Also, larger fishes can eat smaller fishes but can't eat fishes of the same size.
Can you find the number of fishes that survive at the end of the day? */

#include <bits/stdc++.h> 
int fishEater(vector<int> &fishes) 
{   
    int n=fishes.size();
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(fishes[i] > fishes[j])
            {
                fishes[j]=-1;
            }
        }
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(fishes[i]!=-1)
        {
            count++;
        }
    }
    return count;
}
