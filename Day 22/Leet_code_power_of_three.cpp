/* Given an integer n, return true if it is a power of three. Otherwise, return false.
An integer n is a power of three, if there exists an integer x such that n == 3x. */

class Solution {
public:
    bool isPowerOfThree(int n) 
    {
        double x = (double)n;
        while(true)
        {
            if(x == 1)
            {
                return true;
            }
            else if (x<=0)
            {
                return false;
            }
            x = x/3;
        }
        return false;
    }
};
