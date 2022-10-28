//https://leetcode.com/problems/min-cost-climbing-stairs/

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
     int n=cost.size();

      //step1:-create 1D dp array because there is only one variable(n) changing.
      vector<int>dp(n+1);
      //step2:-from memoization wkt the base cases
      dp[0]=cost[0];
      dp[1]=cost[1];
      /*step3:-Apply for loop till the last cell of the array used during memoization
        that is, either n-1 or n-2, since n-1 is greater, we loop till n-1*/
       for(int i=2;i<n;i++)
       {
           dp[i]=cost[i]+min(dp[i-1],dp[i-2]);
       }
        return min(dp[n-1],dp[n-2]);
    }
};
