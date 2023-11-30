/* Our hero Ninja is organizing a coding competition where only two teams can participate simultaneously. To make the competition interesting and fair, both the teams should have an equal number of members. As an organizer, Ninja got the task of making the two teams.

There are some conditions for creating teams. For each competition, he will be given a number 'N', and for each divisor 'D' of 'N' (including 1 and 'N' itself ), he will add a member:

1) to the first team if 'D' is even.

2) to the second team if 'D' is odd.

Since Ninja is very busy organizing the event, he wants you to help him with the task. Your task is to tell Ninja if he can create two teams with an equal number of members. */

bool isPossible(int n)
{
    int oddsum=0,evensum=0;
    for(int i=1;i<=n;i++)
    {
        if((n%i)==0)
        {
            if((i%2)==0)
            {
                evensum++;
            }
            else if((i%2)!=0)
            {
                oddsum++;
            }
        }
    }
    if(oddsum==evensum)
    {
        return true;
    }
    else
    {
        return false;
    }
}
