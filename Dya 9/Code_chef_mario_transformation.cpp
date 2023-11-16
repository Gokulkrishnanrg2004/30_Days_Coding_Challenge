#include <iostream>
using namespace std;
int main() 
{
	int n;
	cin>>n;
	int t;
	int arr[100];
	for(int i=0;i<100;i+=3)
	{
	    arr[i]=0;
	    arr[i+1]=1;
	    arr[i+2]=2;
	}
	for(int i=0;i<n;i++)
	{
	    cin>>t;
	    if(arr[t]==0)
	    {
	        cout<<"NORMAL"<<endl;
	    }
	    else if(arr[t]==1)
	    {
	        cout<<"HUGE"<<endl;
	    }
	    else if(arr[t]==2)
	    {
	        cout<<"SMALL"<<endl;
	    }
	}
}
