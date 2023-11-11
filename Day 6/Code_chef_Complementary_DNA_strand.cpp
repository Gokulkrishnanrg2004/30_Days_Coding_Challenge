#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin>>n;
    int num;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        string s;
        cin>>s;
        for(int j=0;j<num;j++)
        {
            if(s[j]=='A')
            {
                s[j]='T';
            }
            else if(s[j]=='T')
            {
                s[j]='A';
            }
            else if(s[j]=='G')
            {
                s[j]='C';
            }
            else if(s[j]=='C')
            {
                s[j]='G';
            }
        }
        cout<<s<<endl;
    }
}
