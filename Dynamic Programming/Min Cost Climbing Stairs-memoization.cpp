
//https://leetcode.com/problems/min-cost-climbing-stairs/
class Solution {
public:
    int solve(vector<int>&dp,vector<int>&cost,int n)
    {

        //step2:-Handle base Cases
        if(n==0)return cost[0];
        if(n==1)return cost[1];

        //step4:- memoize the solution
        if(dp[n]!=-1)
        {
            return dp[n];
        }
        //step3:-return the dp[n] if the dp[n]==-1
        dp[n]=cost[n]+min(solve(dp,cost,n-1),solve(dp,cost,n-2));
        return dp[n];
    }


    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();

        //step1:-create and intialise the dp array
        vector<int>dp(n+1,-1);
        int ans=min(solve(dp,cost,n-1),solve(dp,cost,n-2));
        return ans;
    }
};
