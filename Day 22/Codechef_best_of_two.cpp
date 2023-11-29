/* Alice and Bob are playing a game. Each player rolls a regular six faced dice 3 times.
The score of a player is the sum of the values of the highest 
2 rolls. The player with the highest score wins, and the game ends in a Tie if both players have the same score.

Find the winner of the game or determine whether it is a tie. */

#include <iostream>
using namespace std;
int main() 
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    int a1=0,a2=0,a3=0,b1=0,b2=0,b3=0;
	    cin>>a1>>a2>>a3>>b1>>b2>>b3;
	    int sum1=0,sum2=0;
	    int maxa1 = max(max(a1,a2),a3);
	    if(maxa1==a1)
	    {
	        a1=0;
	    }
	    else if(maxa1==a2)
	    {
	        a2=0;
	    }
	    else if(maxa1==a3)
	    {
	        a3=0;
	    }
	    int maxa2= max(max(a1,a2),a3);
	    sum1 = maxa1+maxa2;
	    int maxb1 = max(max(b1,b2),b3);
	    if(maxb1==b1)
	    {
	        b1=0;
	    }
	    else if(maxb1==b2)
	    {
	        b2=0;
	    }
	    else if(maxb1==b3)
	    {
	        b3=0;
	    }
	    int maxb2= max(max(b1,b2),b3);
	    sum2 = maxb1+maxb2;
	    if(sum1 > sum2)
	    {
	        cout<<"Alice"<<endl;
	    }
	    else if(sum2 > sum1)
	    {
	        cout<<"Bob"<<endl;
	    }
	    else 
	    {
	        cout<<"Tie"<<endl;
	    }
	}
}
