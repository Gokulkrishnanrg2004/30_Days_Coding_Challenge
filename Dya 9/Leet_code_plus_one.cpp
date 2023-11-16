class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        vector<int>ans;
        int n = digits.size();
        int r;
        long long int num = 0;
        for(int i = 0; i < n; i++)
        {
            num += digits[i]*pow(10,n-1-i);
        }
        long long int new_num = num+1;
        while(new_num > 0)
        {
            r = new_num%10;
            ans.push_back(r);
            new_num = new_num/10;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
