
//https://leetcode.com/problems/min-cost-climbing-stairs/
class Solution {
public:
    int solve(vector<int>&dp,vector<int>&cost,int n)
    {
        if(n==0)return cost[0];
        if(n==1)return cost[1];

        if(dp[n]!=-1)
        {
            return dp[n];
        }

        dp[n]=cost[n]+min(solve(dp,cost,n-1),solve(dp,cost,n-2));
        return dp[n];
    }


    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>dp(n+1,-1);
        int ans=min(solve(dp,cost,n-1),solve(dp,cost,n-2));
        return ans;
    }
};
