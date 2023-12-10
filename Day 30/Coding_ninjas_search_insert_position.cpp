/* You are given a sorted array 'arr' of distinct values and a target value 'm'.
You need to search for the index of the target value in the array */

int searchInsert(vector<int>& arr, int m)
{
	int index=0,flag=0;
	int n = arr.size();
	for(int i=0;i<n;i++)
	{
		if(m <= arr[i])
		{
			index=i;
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		return index;
	}
	else if(flag==0)
	{
		index=n;
		return index;
	}
}
