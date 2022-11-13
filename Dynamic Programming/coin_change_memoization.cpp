//https://leetcode.com/problems/coin-change/

class Solution {
public:
int RecSol(vector<int>& coins, int amount,vector<int>& dp)
{//base condtions
    if(amount==0)
        return 0;

    if(amount<0)
        return INT_MAX;
        //if answer is already availabe return it
    if(dp[amount]!=-1)
        return dp[amount];

    int mini=INT_MAX;
    //check with each coin
    for(int i=0;i<coins.size();i++)
    {
        int ans=RecSol(coins,amount-coins[i],dp);
        if(ans!=INT_MAX)
            mini=min(mini,1+ans);
    }
    dp[amount]=mini;
    return mini;
}

int coinChange(vector<int>& coins, int amount) {
  //create dp array
        vector<int>dp(amount+1,-1);
            int ans=RecSol(coins,amount,dp);
            if(ans==INT_MAX)
                return -1;
            else
            {
                return ans;
            }
    }
};
