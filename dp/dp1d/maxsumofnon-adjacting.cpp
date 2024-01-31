#include <bits/stdc++.h> 

int maximumNonAdjacentSum(vector<int> &nums){
    int l=nums.size();
    int dp[l+1];
    dp[0]=nums[0];
    dp[1]=nums[1];

  for(int i=1;i<l;i++)
  {  f
    dp[i]=max(dp[i-2]+nums[i],dp[i-1]) ;
  }  1
  return dp[l-1];
}