/* Chef has N empty bottles where each bottle has a capacity of X litres.
There is a water tank in Chefland having K litres of water. Chef wants to fill the empty bottles using the water in the tank.
Assuming that Chef does not spill any water while filling the bottles, find out the maximum number of bottles Chef can fill completely. */

#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    int a,b,c,res=0;
	    cin>>a>>b>>c;
	    res = c/b;
	    if(res < a && res!=0)
	    {
	        cout<<res<<endl;;
	    }
	    else if(res==0)
	    {
	        cout<<res<<endl;
	    }
	    else if(res!=0 && res>a)
	    {
	        cout<<a<<endl;
	    }
	}
}
