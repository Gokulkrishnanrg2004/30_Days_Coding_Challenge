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
	    int result1=0,result2=0;
	    result1=a/b;
	    result2=a%b;
	    cout<<result1+result2<<endl;
	    
	}
}
