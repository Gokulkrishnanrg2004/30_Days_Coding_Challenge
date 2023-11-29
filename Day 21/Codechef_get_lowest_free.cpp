/* Chef goes to the supermarket to buy some items. Luckily there's a sale going on under which Chef gets the following offer:
If Chef buys 3 items then he gets the item (out of those 3 items) having the lowest price as free.
For e.g. if Chef bought 3 items with the cost 6, 2 and 4, then he would get the item with cost 2 as free. So he would only have to pay the cost of the other two items which will be 6+4=10.

Chef buys 3 items having prices A, B and C respectively. What is the amount of money Chef needs to pay? */

#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a=0,b=0,c=0,m=0;
        cin>>a>>b>>c;
        if(a==b==c)
        {
            cout<<a+b<<endl;
        }
        m = min(min(a,b),c);
        if(m==a)
        {
            a=0;
        }
        else if(m==b)
        {
            b=0;
        }
        else if(m==c)
        {
            c=0;
        }
        cout<<a+b+c<<endl;
    }
}
