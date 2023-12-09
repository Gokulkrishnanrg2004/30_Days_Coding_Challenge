/* Given an array of integers arr, return true if and only if it is a valid mountain array.

Recall that arr is a mountain array if and only if:

arr.length >= 3
There exists some i with 0 < i < arr.length - 1 such that:
arr[0] < arr[1] < ... < arr[i - 1] < arr[i] 
arr[i] > arr[i + 1] > ... > arr[arr.length - 1] */

class Solution {
public:
    bool validMountainArray(vector<int>& nums) 
    {
        int n = nums.size(), i=0,j=n-1;
        while (i + 1 < n && nums[i] < nums[i + 1]) 
            i++;
        while (j > 0 && nums[j - 1] > nums[j]) 
            j--;
        return i > 0 && i == j && j < n - 1;
    }
};
