/* Chef is a very lazy person. Whatever work is supposed to be finished in x units of time,
he finishes it in m∗x units of time. But there is always a limit to laziness, so he delays
the work by at max d units of time. Given x,m,d, find the maximum time taken by Chef to
complete the work. */

#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin>>n;
    int x,m,d;
    for(int i=0;i<n;i++)
    {
        int a=0,b=0;
        cin>>x>>m>>d;
        a=x*m;
        b=x+d;
        cout<<min(a,b)<<endl;
    }
}
