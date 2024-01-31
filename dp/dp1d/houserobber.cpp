#include <bits/stdc++.h> 
long long int houseRobber(vector<int>& v)
{
     int l=v.size();
     int dp[l+1];

  for (int  i = 0; i <l; i++)
  {for (int  j = i+1; j < l; j++)
  {  dp[i]=max(dp[i],v[j%l]+dp[j%l]) ;
  }
  
  
  }
  return dp[l];

}
int main(
     
)