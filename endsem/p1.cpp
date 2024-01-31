#include <bits/stdc++.h>
using namespace std;
#define ll  long long  int
ll m = 1e9 + 7;
int ans=0;
int ans1=0; 

int rob(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> dp2(n, -1);
         vector<int> dp1(n, -1);
         if(n==1){
            return ans(n-1,nums,dp2);
         }
        int ans_1 = ans1(n - 1, nums, dp1);
        int ans_2 = ans(n - 2, nums, dp2);
        return max(ans_1, ans_2);
    }

    int ans(int x, vector<int> &nums, vector<int> &dp2)
    {
        if (x < 0)
            return 0;
        if (x == 0)
        {
            return dp2[x] = nums[x];
        }
        if (dp2[x] != -1)
        {
            return dp2[x];
        }
        int pick = ans(x - 2, nums, dp2) + nums[x];
        int notpick = ans(x - 1, nums, dp2) + 0;
        return dp2[x] = max(pick, notpick);
    }
    int ans1(int x, vector<int> &nums, vector<int> &dp1)
    {
        if (x < 1)
            return 0;
        if (x == 1)
        {
            return dp1[x] = nums[x];
        }
        if (dp1[x] != -1)
        {
            return dp1[x];
        }
        int pick = ans1(x - 2, nums, dp1) + nums[x];
        int notpick = ans1(x - 1, nums, dp1) + 0;
        return dp1[x] = max(pick, notpick);
    }

signed main() {
long long t;
cin >> t;
while (t--)
{

  int n;
    cin>>n;
      vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int k =rob(nums);
    cout<<k;
}return 0;
    }