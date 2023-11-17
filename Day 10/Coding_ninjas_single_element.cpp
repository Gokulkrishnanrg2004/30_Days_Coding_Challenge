int singleNonDuplicate(vector<int>& arr)
{
	int n=arr.size();
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				arr[i]=-1;
				arr[j]=-1;
			}
		}
	}
	int result=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>0)
		{
			result=arr[i];
		}
	}
	return result;
}
