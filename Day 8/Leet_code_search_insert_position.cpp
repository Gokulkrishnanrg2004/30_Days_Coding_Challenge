class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        int n=nums.size();
        int flag=0,x;
        for(int i=0;i<n;i++)
        {
            if(target==nums[i])
            {
                x=i;
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            for(int i=0;i<n;i++)
            {
                if(target>nums[i] && target-nums[i]==1)
                {
                    x=i+1;
                    break;
                }
            }
        }
        return x;
    }
};
