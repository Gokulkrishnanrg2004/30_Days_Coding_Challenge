/*
In Chefland, denominations less than rupees 10 have stopped and now rupees 10 is the smallest denomination.
Suppose Chef goes to buy some item with cost not a multiple of 10, then, he will be charged the cost that is the nearest multiple of 10.
If the cost is equally distant from two nearest multiples of 10, then the cost is rounded up.

For example, 
35,38,40,44 are all rounded to 40 */

#include <iostream>
using namespace std;
int main() 
{
    int n;
    cin>>n;
    int m;
    for(int i=0;i<n;i++)
    {
        int res=0,ch=0,rem=0;
        cin>>m;
        res=m%10;
        if(res==0)
        {
            ch=100-m;
            cout<<ch<<endl;
        }
        else if(res>=5)
        {
            rem=10-res;
            m=m+rem;
            ch=100-m;
            cout<<ch<<endl;
        }
        else if(res<5)
        {
            rem=m-res;
            ch=100-rem;
            cout<<ch<<endl;
        }
    }
}

