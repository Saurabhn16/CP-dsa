#include <bits/stdc++.h>
using namespace std;
#define int long long
int solve(vector<int> &num, int tar)
{
    if (tar < 0)
    {
        return 0;
    }
    if (tar == 0)
    {
        return 1;
    }
    int ans = 0;
    for (int i = 0; i < num.size(); i++)
    {
        ans += solve(num, tar - num[i]);
    }
    return ans;
}
int tab(vector<int> &nums, int tar)
{
    vector<int> dp(tar + 1, 0);

    dp[0] = 1;

    for (int i = 1; i <= tar; i++)
    {
        for (int j = 0; j < nums.size(); j++)
        {
            if (i - nums[j] >= 0)
            {
                dp[i] += dp[i - nums[j]];
              
            }
        }
         cout<<i<< " "<<dp[i]<<" "<<endl;;
    }
    return dp[tar];
}


signed main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n,  tar;
        vector<int>nums;
        cin >> n >> tar;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            nums.push_back(k);
        }

            cout<< tab(nums, tar)<<endl;;
    }
    return 0;
}