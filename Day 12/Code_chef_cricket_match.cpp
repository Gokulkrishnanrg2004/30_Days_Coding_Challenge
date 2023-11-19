/* There is a cricket match in Chefland. Chef's team requires N runs to win in M overs.
Given that 1 over consists of 6 balls and a player can score a maximum of 6 runs in a ball, find whether Chef's team can win. */

#include <iostream>
using namespace std;
int main() 
{
    int n;
    cin>>n;
    int a,b;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        if((b*36)>=a)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
