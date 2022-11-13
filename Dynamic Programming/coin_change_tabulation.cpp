//https://leetcode.com/problems/coin-change/
class Solution {
public:
int TabSol(vector<int>& coins, int amount)
{
    if(amount==0)
        return 0;

//create dp array
    vector<int>dp(amount+1,INT_MAX);
//for amount "0", number of coins will be "0"
    dp[0]=0;

//for each amount, check with each coin
    for(int i=1;i<=amount;i++)
    {
        for(int j=0;j<coins.size();j++)
        {
          //"dp[i-coins[j]]!=INT_MAX" is necessary because
          //in next line we add 1, which may go over integer value.
            if(i-coins[j]>=0 && dp[i-coins[j]]!=INT_MAX)
            { //we do +1 because we have to count the current denoomination also.
                dp[i]=min(dp[i],1+dp[i-coins[j]]);
            }
        }
    }
    if(dp[amount]!=INT_MAX)
        return dp[amount];
    else
        return INT_MAX;
}
    int coinChange(vector<int>& coins, int amount) {
        int ans=TabSol(coins,amount);
            if(ans==INT_MAX)
                return -1;
            else
            {
                return ans;
            }

    }
};
