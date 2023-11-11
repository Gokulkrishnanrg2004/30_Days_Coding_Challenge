class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-1-i;j++)
            {
                if(nums[j]>nums[j+1])
                {
                    int temp=nums[j];
                    nums[j]=nums[j+1];
                    nums[j+1]=temp;
                }
            }
        }
        int x;
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=i)
            {
                x=i;
                break;
            }
        }
        return x;
    }
};
