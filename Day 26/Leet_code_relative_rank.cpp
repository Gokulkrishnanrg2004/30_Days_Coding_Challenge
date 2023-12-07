class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) 
    {
        string s1="Gold Medal",s2="Silver Medal",s3="Bronze Medal";
        vector<int>temp;
        vector<string>ans;
        int n=score.size();
        for(int i=0;i<n;i++) 
        {
          temp.push_back(score[i]);
        }
        sort(temp.begin(),temp.end());
        for(int i=0;i<n;i++)
        {
            int count=1;
            for(int j=n-1;j>=0;j--)
            {
                if(score[i]==temp[j])
                { 
                    ans.push_back(to_string(count));
                }
                else count++;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(ans[i]=="1") 
              ans[i]=s1;
            if(ans[i]=="2") 
              ans[i]=s2;
            if(ans[i]=="3") 
              ans[i]=s3; 
        }
        return ans;
    }
}; 
