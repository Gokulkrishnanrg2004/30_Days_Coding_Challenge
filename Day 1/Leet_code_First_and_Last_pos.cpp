pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    int f=0,l=0,fs,ls;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==k)
        {
            f=1;
            fs=i;
            break;
        }
    }
    for(int i=arr.size();i>=0;i--)
    {
        if(arr[i]==k)
        {
            l=1;
            ls=i;
            break;
        }
    }
    if(f>0 && l>0)
    {
        return make_pair(fs,ls);
    }
    else
    {
        return make_pair(-1,-1);
    }
}
