/* People in Chefland have three different eye colors, namely brown, blue, and green. green is the rarest of the eye colors whereas brown is most common.

The eye color of the child of two people is most likely to be the most common eye color between them.

You are given two characters denoting the eye colors of two people in Chefland. The character R denotes bRown color, B denotes Blue color, and G denotes Green color.

Determine the most likely eye color of their child. (Print R, B or G denoting bRown, Blue or Green respectively).

Please see the sample test cases below for explained examples. */

#include <iostream>
using namespace std;
int main() 
{
	char a,b;
	cin>>a>>b;
	int sum1=0,sum2=0;
	if(a=='R')
	{
	    sum1=2;
	}
	else if(a=='B')
	{
	    sum1=1;
	}
	else if(a=='G')
	{
	    sum1=0;
	}
	if(b=='R')
	{
	    sum2=2;
	}
	else if(b=='B')
	{
	    sum2=1;
	}
	else if(b=='G')
	{
	    sum2=0;
	}
	if(sum1==sum2)
	{
	    cout<<a<<endl;
	}
	else if(sum1 > sum2)
	{
	    cout<<a<<endl;
	}
	else if(sum1 < sum2)
	{
	    cout<<b<<endl;
	}
}
