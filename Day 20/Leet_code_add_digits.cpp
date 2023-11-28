/* Given an integer num, repeatedly add all its digits until the result has only one digit, and return it. */

class Solution 
{
    public  : int addDigits(int n) 
    {
        int num = n;
        while(num>9)
        {
            int rev=0;
            while(num >0)
            {
                rev+= num%10;
                num/=10;
            }
            num = rev;
        }
        return num;
    }
};
