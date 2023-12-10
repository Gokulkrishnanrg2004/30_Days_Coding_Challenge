/* Write a program to obtain length (L) and breadth (B) of a rectangle and check whether
its area is greater or perimeter is greater or both are equal. */

#include <iostream>
using namespace std;
int main() 
{
	int l,b;
	cin>>l>>b;
	int area = l*b;
	int peri = 2*(l+b);
	if(area == peri)
	{
	    cout<<"Eq"<<endl;
	    cout<<area;
	}
	else if(area > peri)
	{
	    cout<<"Area"<<endl;
	    cout<<area;
	}
	else if(area < peri)
	{
	    cout<<"Peri"<<endl;
	    cout<<peri;
	}
}
