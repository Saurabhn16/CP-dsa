#include <bits/stdc++.h>
long long int houseRobber(vector<int> &nums)
{
    vector<int> a;
    vector<int> b;
    a.push_back(nums[0]);
    for (int i = 1; i < nums.size() - 1; i++)
    {
        a.push_back(nums[i]);
        b.push_back(nums[i]);
    }
    b.push_back(nums[nums.size() - 1]);

    int l = a.size();
    long long int dp[l + 1];
    dp[0] = a[0];
    dp[1] = a[1];

    for (int i = 1; i < l; i++)
    {
        if (dp[i - 2] + a[i] > dp[i - 1])
        {
            dp[i] = dp[i - 2] + a[i];
        }
        else
        {
            dp[i] = dp[i - 1];
        }
    }
    long long int k = dp[l - 1];

    int m = b.size();
    long long int pd[m + 1];
    pd[0] = b[0];
    pd[1] = b[1];

    for (int i = 1; i < m; i++)
    { if (pd[i - 2] + b[i] > pd[i - 1])
        {
            pd[i] = pd[i - 2] + b[i];
        }
        else
        {
            pd[i] = pd[i - 1];
        }
    }
    long long int k0 = pd[m - 1];

    if (k>k0)
    {
        return k;
        
    }
    else { return k0;}

}
