bool isValidParenthesis(string s)
{
    int n=s.length();
    int count1=0,count2=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='['|| s[i]=='('|| s[i]=='{')
        {
            count1++;
        }
        else if(s[i]==']'|| s[i]==')'|| s[i]=='}')
        {
            count2++;
        }
    }
    if(count1==count2)
    {
        return true;
    }
    else
    {
        return false;
    }
}
