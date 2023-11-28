/* Chef is confused whether to go out and eat at the restaurant or order food online.
The online order costs N rupees while the cost of eating at the restaurant is M rupees.
However, Chef has a discount coupon with which he can avail flat 10% off on his online order.
Find the cheaper option for Chef to eat, i.e., whether to order food online or eat at the restaurant. */

#include <iostream>
using namespace std;
int main() 
{
	int n;
	cin>>n;
	int a,b;
	for(int i=0;i<n;i++)
	{
	    double res=0;
	    cin>>a>>b;
	    res=(a-(0.1*a));
	    if(res == b)
	    {
	        cout<<"EITHER"<<endl;
	    }
	    else if(res > b)
	    {
	        cout<<"DINING"<<endl;
	    }
	    else if(res < b)
	    {
	        cout<<"ONLINE"<<endl;
	    }
	}
}
