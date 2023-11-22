/* There are 10 problems in a contest. You know that the score of each problem is either 1 or100 points.

Chef came to know the total score of a participant and he is wondering how many problems were actually solved by that participant.

Given the total score P of the participant, determine the number of problems solved by the participant. Print −1 in case the score is invalid.

Input Format
First line will contain T, number of test cases. Then the test cases follow.
Each test case contains of a single line containing a single integer P - denoting the number of points scored by the participant.
Output Format
For each testcase, output the number of problems solved by the participant or −1 if the score is invalid. */

#include <iostream>
using namespace std;
int main() 
{
	int n;
	cin>>n;
	int m;
	for(int i=0;i<n;i++)
	{
	    int q=0,r=0,result=0;
	    cin>>m;
	    q=m/100;
	    r=m%100;
	    result=q+r;
	    if(result<=10)
	    {
	          cout<<result<<endl;
        }
	    else
	    {
	          cout<<-1<<endl;
	    }
	}
}
