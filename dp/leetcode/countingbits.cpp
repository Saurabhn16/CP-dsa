class Solution {
public:

    vector<int> countBits(int n) {
    vector<int>dp(n+1,0);
    for(int i=0;i<=n;i++){
  dp[i]=dp[i/2]+(i&1);
    }
    return dp;
    }
};