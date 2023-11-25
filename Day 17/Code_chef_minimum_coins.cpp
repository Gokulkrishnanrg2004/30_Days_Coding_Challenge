/* Chef has infinite coins in denominations of rupees 5 and rupees 10.
Find the minimum number of coins Chef needs, to pay exactly X rupees. If it is impossible to pay X rupees in denominations of rupees 5 and 10 only, print −1. */

#include <iostream>
using namespace std;
int main() 
{
	int n;
	cin>>n;
	int m;
	for(int i=0;i<n;i++)
	{
	    int count=0;
	    cin>>m;
	    if((m%5)==0)
	    {
	        while(m>0)
	        {
	            if(m>=10)
	            {
	                m=m-10;
	                count++;
	            }
	            else if(m>=5)
	            {
	                m=m-5;
	                count++;
	            }
	        }
	        cout<<count<<endl;
	    }
	    else
	    {
	        cout<<-1<<endl;
	    }
	}
}
