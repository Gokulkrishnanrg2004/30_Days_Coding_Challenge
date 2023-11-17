#include <iostream>
using namespace std;
int main() 
{
    int n;
    cin>>n;
    int m;
    for(int i=0;i<n;i++)
    {
        int m;
        cin>>m;
        int a[4];
        for(int i=0;i<4;i++)
        {
            cin>>a[i];
        }
        int max=0;
        for(int i=0;i<4;i++)
        {
            if(max<a[i])
            max=a[i];
        }
        cout<<max<<endl;
    }
}
