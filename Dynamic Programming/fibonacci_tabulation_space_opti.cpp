#include <iostream>
#include <vector>

using  namespace std;
//main thing in dp is that the dimension of array depends on the the number of the variables
int main()
{
  /*in the tabulation mwthod we used an array which takes the SC of O(N)
  we can avoid this by taking two variables*/
  int n=5;
  //intialiaze the base cases
  int prev1=1;
  int prev2=0;
  int curr=0;
  for(int i=2;i<=n;i++)
  {
    curr=prev1+prev2;
    prev2=prev1;
    prev1=curr;
  }
  cout<<curr;
  return 0;
}
