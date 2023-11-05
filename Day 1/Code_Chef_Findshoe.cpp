#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    if(t<=100 && t>=1)
    {
    int n,m;
    for(int i=0;i<t;i++)
    {
        int total=0;
        cin>>n>>m;
        if(n<=m)
        {
            cout<<n<<endl;
        }
        else
        {
            total=m+(n-m)*2;
            cout<<total<<endl;
        }
    }
    }
}
