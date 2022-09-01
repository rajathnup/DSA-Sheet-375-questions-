class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    int min_diff=INT_MAX;
    sort(a.begin(),a.end());
    for(int i=0;i<n-m+1;i++)
    {
        if(a[i+m-1]-a[i]<min_diff)
        {
            min_diff=a[i+m-1]-a[i];
        }
    }
    return min_diff;
    }   
};
