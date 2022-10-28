#include <iostream>
#include <vector>

using  namespace std;
//main thing in dp is that the dimension of array depends on the the number of the variables
int main()
{
  int n=27;
  vector <int>dp(n+1);
  //intialiaze the base cases
  dp[0]=0;
  dp[1]=1;
  for(int i=2;i<=n;i++)
  {
    dp[i]=dp[i-1]+dp[i-2];
  }
  cout<<dp[n];
  return 0;
}
