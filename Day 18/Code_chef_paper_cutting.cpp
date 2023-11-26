/* Chef has a square-shaped chart paper with the side length equal to N. He wants to cut out K×K squares from this chart paper.
Find the maximum number of K×K squares he can cut from the entire chart paper.
Note that, some part of the chart paper might not be a included in any K×K cutout square. */

#include <iostream>
using namespace std;
int main() 
{
    int n;
    cin>>n;
    int c,p;
    for(int i=0;i<n;i++)
    {
        int result=0;
        cin>>c>>p;
        result=c/p;
        cout<<result*result<<endl;
    }
}
