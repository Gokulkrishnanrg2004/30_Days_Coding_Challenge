#include <iostream>
using namespace std;

int main() 
{
    int num;
    cin>>num;
    int p,n;
    for(int i=0;i<num;i++)
    {
        int result=0;
        cin>>p>>n;
        result=p/n;
        if(result>=20)
        {
            cout<<"20"<<endl;
        }
        else
        {
            cout<<result<<endl;
        }
    }
}
