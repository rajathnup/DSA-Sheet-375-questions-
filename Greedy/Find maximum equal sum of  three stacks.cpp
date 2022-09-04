class Solution{
public:
    int maxEqualSum(int N1,int N2,int N3,vector<int> &S1,vector<int> &S2,vector<int> &S3){
       
        int sum1 = 0, sum2 = 0, sum3 = 0;
 
    // Finding the initial sum of stack1.
    for (int i = 0; i < N1; i++)
        sum1 += S1[i];
 
    // Finding the initial sum of stack2.
    for (int i = 0; i < N2; i++)
        sum2 += S2[i];
 
    // Finding the initial sum of stack3.
    for (int i = 0; i < N3; i++)
        sum3 += S3[i];
 
    // As given in question, first element is top
    // of stack..
    int top1=0,top2=0,top3=0;
        while(1)
        {
            if(S1.empty()||S3.empty()||S2.empty())
            {
                return 0;
            }
            
            if(sum1==sum2 &&sum2==sum3)
            {
                return sum1;
            }
            else
            {
                
                if (sum1 >= sum2 && sum1 >= sum3)
                    sum1 -= S1[top1++];
                else if (sum2 >= sum1 && sum2 >= sum3)
                    sum2 -= S2[top2++];
                else if (sum3 >= sum2 && sum3 >= sum1)
                    sum3 -= S3[top3++];
                
            }
        }
        return 0;
    }
