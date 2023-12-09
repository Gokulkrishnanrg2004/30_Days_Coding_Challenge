/* For encoding an even-length binary string into a sequence of A, T, C, and G, we iterate from left to right and replace the characters as follows:

00 is replaced with A
01 is replaced with T
10 is replaced with C
11 is replaced with G
Given a binary string 
S of length N is even, find the encoded sequence. */

#include <bits/stdc++.h>
using namespace std;
int main() 
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    int a;
	    cin>>a;
	    string s;
	    cin>>s;
	    for(int i=0;i<a;i+=2)
	    {
	        if(s[i]=='0' && s[i+1]=='0')
	        {
	            cout<<"A";
	        }
	        else if(s[i]=='0' && s[i+1]=='1')
	        {
	            cout<<"T";
	        }
	        else if(s[i]=='1' && s[i+1]=='0')
	        {
	            cout<<"C";
	        }
	        else if(s[i]=='1' && s[i+1]=='1')
	        {
	            cout<<"G";
	        }
	    }
	    cout<<endl;
	}
}
