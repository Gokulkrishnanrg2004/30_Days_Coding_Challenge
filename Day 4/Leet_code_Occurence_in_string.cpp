class Solution {
public:
    int strStr(string haystack, string needle) 
    {
        if(needle.empty())
        {
            return 0;
        }
            int j = 0;
    int x = -1;
    for (int i = 0; i < haystack.size(); i++) {
        if (haystack[i] == needle[j]) {
            if (j == 0) {
                x = i;  
            }
            j++;
            if (j == needle.size()) {
                return x;  
            }
        } else {
            j = 0;  
            x = -1;
        }
    }
    
    return -1;  
}
};
