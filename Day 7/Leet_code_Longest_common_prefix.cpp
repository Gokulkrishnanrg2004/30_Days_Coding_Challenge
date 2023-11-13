class Solution 
{
    public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        if (strs.empty()) {
        return "";
    }
    string s3;
    for (int j = 0; j < strs[0].size(); j++) 
    {
        char current_char = strs[0][j];    
        for (int i = 1; i < strs.size(); i++) 
        {
            if (j >= strs[i].size() || strs[i][j] != current_char)
            {
                return s3;
            }
        }
        s3.push_back(current_char);
    }
    return s3;
    }
};
