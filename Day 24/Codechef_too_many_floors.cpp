/* Chef and Chefina are residing in a hotel.
There are 10 floors in the hotel and each floor consists of 10 rooms.
Floor 1 consists of room numbers 1 to 10.
Floor 2 consists of room numbers 11 to 20.
Floor 10⋅(i−1)+1 to 10⋅i.
You know that Chef's room number is 
X while Chefina's Room number is Y.
If Chef starts from his room, find the number of floors he needs to travel to reach Chefina's room. */

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
	    int x=0,y=0,res=0;
	    if(a>=1 && a<=10)
	    {
	        x=1;
	    }
	    else if(a>=11 && a<=20)
	    {
	        x=2;
	    }
	    else if(a>=21 && a<=30)
	    {
	        x=3;
	    }
	    else if(a>=31 && a<=40)
	    {
	        x=4;
	    }
	    else if(a>=41 && a<=50)
	    {
	        x=5;
	    }
	    else if(a>=51 && a<=60)
	    {
	        x=6;
	    }
	    else if(a>=61 && a<=70)
	    {
	        x=7;
	    }
	    else if(a>=71 && a<=80)
	    {
	        x=8;
	    }
	    else if(a>=81 && a<=90)
	    {
	        x=9;
	    }
	    else if(a>=91 && a<=100)
	    {
	        x=10;
	    }
	    if(b>=1 && b<=10)
	    {
	        y=1;
	    }
	    else if(b>=11 && b<=20)
	    {
	        y=2;
	    }
	    else if(b>=21 && b<=30)
	    {
	        y=3;
	    }
	    else if(b>=31 && b<=40)
	    {
	        y=4;
	    }
	    else if(b>=41 && b<=50)
	    {
	        y=5;
	    }
	    else if(b>=51 && b<=60)
	    {
	        y=6;
	    }
	    else if(b>=61 && b<=70)
	    {
	        y=7;
	    }
	    else if(b>=71 && b<=80)
	    {
	        y=8;
	    }
	    else if(b>=81 && b<=90)
	    {
	        y=9;
	    }
	    else if(b>=91 && b<=100)
	    {
	        y=10;
	    }
	    if(x>=y)
	    {
	        res = x-y;
	    }
	    else
	    {
	        res = y-x;
	    }
	    cout<<res<<endl;
	}
}
