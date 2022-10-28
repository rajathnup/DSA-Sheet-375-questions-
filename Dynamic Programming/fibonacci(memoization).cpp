#include <iostream>
#include <vector>

using  namespace std;


int fib(int n, vector<int> dp) //top down approach->memoization
{
  //base condition
  if(n<=1)
  {
    return n;
  }
  //check if the result of a particular value already exists
  if(dp[n]!=-1)
  {
    return dp[n];
  }

  //if it doesn't then add it to the dp array
  dp[n]=fib(n-1,dp)+fib(n-2,dp);
  return dp[n];
}
int main()
{
  int n=27;
  //intilaize the dp array with -1
  vector <int>dp(n+1,-1);
  int res=fib(n,dp);
  cout<<res;
  return 0;
}
