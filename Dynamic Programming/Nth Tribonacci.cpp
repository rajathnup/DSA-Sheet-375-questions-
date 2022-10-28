
//https://leetcode.com/problems/n-th-tribonacci-number/submissions/

class Solution {
public:
    int tribonacci(int n) {
        int prev1=1,prev2=1,prev3=0,curr=0;
        if(n==0)return prev3;
        if(n==1)return prev2;
        if(n==2)return prev2;
        for(int i=3;i<=n;i++)
        {
            curr=prev1+prev2+prev3;
            prev3=prev2;
            prev2=prev1;
            prev1=curr;
        }
        return curr;
    }
};
