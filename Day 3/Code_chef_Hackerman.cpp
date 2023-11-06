//Hackerman :

#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a,b;
	for(int i=0;i<n;i++)
	{
	    cin>>a>>b;
	    int count=0;
	    int tot=a+b;
	    for(int i=1;i<=tot;i++)
	    {
	        if(tot%i==0)
	        {
	            count++;
	        }
	    }
	    if(count==2)
	   {
	        cout<<"Alice"<<endl;
	            
	   }
	    else
	    {
	        cout<<"Bob"<<endl;
	    }
	}
}
