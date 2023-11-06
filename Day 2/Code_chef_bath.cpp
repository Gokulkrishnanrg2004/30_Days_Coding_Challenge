/* A geyser has a capacity of X litres of water and a bucket has a capacity of Y litres of water.
One person requires exactly 2 buckets of water to take a bath. Find the maximum number of people that can take bath using water from one completely filled geyser.. */

#include<iostream>
using namespace std;
int main()
{
    int t,x,y,tot,rem;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        tot=0,rem=0;
        cin>>x>>y;
        tot=y*2;
        if(tot>x)
        {
            cout<<"0"<<endl;
        }
        else if(tot<=x)
        {
            rem=x/tot;
            cout<<rem<<endl;
        }
    }
}
