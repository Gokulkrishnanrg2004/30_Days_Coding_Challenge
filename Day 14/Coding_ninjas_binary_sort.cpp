/* A binary array is an areay contains an integr 'T' cosisting of only 0s and 1s

Sample Input 1 :
2
3 
0 1 0
4
0 0 0 1
Sample Output 1 :
0 0 1
0 0 0 1 */

vector<int> sortBinaryArray(vector<int> arr, int n)  
{
 	int num = arr.size();
	for(int i=0;i<num;i++)
	{
		for(int j=0;j<num-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	return arr;
}
