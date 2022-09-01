class Solution
{
   public:
    int findSum(int A[], int N)
    {
        int min=A[0];
    	   int  max=A[0];
    	//code here.
    	for(int i=0;i<N;i++)
    	{
    	    if(A[i]<min)
    	    {
    	        min=A[i];
    	    }
    	    if(A[i]>max)
    	    {
    	        max=A[i];
    	    }
    	}
    	return (max+min);
    }

};
