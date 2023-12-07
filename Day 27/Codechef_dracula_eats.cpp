#include <bits/stdc++.h>
using namespace std;
int main() 
{
	int n;
	cin>>n;
	int x;
	for(int i=0;i<n;i++)
	{
	    cin>>x;
	    x+=5;
	    cout<<floor(x*1/7)<<endl;
	}
	return 0;
}
