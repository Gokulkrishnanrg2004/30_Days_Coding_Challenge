/* Given a string s consisting of words and spaces, return the length of the last word in the string.
A word is a maximal substring consisting of non-space characters only. */

class Solution {
public:
    int lengthOfLastWord(string s) {
        int siz=s.size(),count=0,flag=0;
        for(int i=siz-1;i>=0;i--)
        {
            if(s[i]==' '&& flag)
                break;
            if(s[i]!=' ')
            {
                flag=1;
                count++;
            }
        }
        return count;
    }
};
