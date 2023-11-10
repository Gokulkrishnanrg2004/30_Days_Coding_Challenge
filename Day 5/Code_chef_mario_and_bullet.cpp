#include <iostream>
using namespace std;
int main() 
{
	int n;
	cin>>n;
	int m,g,r;
	for(int i=0;i<n;i++)
	{
	    int result=0;
	    cin>>m>>g>>r;
	    result=g/m;
	    result=r-result;
	    if(result>0)
	    {
	        cout<<result<<endl;
	    }
	    else if(result<=0)
	    {
	        cout<<"0"<<endl;
	    }
	}
}
