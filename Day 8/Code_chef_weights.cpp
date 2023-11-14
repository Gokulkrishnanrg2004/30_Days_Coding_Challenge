#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int w,x,y,z;
    for(int i=0;i<n;i++)
    {
        cin>>w>>x>>y>>z;
        if(w==x || w==y || w==z)
        {
            cout<<"YES"<<endl;
        }
        else if(w==(x+y) || w==(y+z) || w==(x+z))
        {
            cout<<"YES"<<endl;
        }
        else if(w==(x+y+z))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
