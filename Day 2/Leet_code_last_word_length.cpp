class Solution {
    public :
    int length(string s)
    {
        int res=0,i=s.size()-1;
        while(i>=0 && s[i]==' ') --i;
        while(i>=0 && s[i]!=' ')
        {
            ++res;
            --i;
        }
        return res;
    }
}
