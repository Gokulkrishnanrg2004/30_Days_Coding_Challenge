int findUnique(int *arr, int size)
{
    int flag;
    for(int i=0;i<size;i++)
    {
        flag=0;
        for(int j=i+1;j<size-1;j++)
        {
            if(arr[i]==arr[j])
            {
                arr[j]=-5;
                flag=1;
                break;
            }
        }
        if(flag==0 && arr[i]!=-5)
        {
            return arr[i];
        }
    }
}
