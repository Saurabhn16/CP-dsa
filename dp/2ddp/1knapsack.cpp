#include <bits/stdc++.h>
using namespace std;
#define int long long
int knapsackR(vector<int> weight, vector<int> value, int maxWeight, int i)
{
    if (i == 0)
    {
        if (weight[0] <= maxWeight)
        {
            return value[0];
        }
        else
            return 0;
    }
    int include = 0;
    if (weight[i] <= maxWeight)
    {
        include = value[i] + knapsackR(weight, value, maxWeight - weight[i], i - 1);
    }
    int exclude = 0 + knapsackR(weight, value, maxWeight, i - 1);
    int ans = max(include, exclude);
    return ans;
}
// Recursive +Memoization (topDOwn)
int knapsackM(vector<int> weight, vector<int> value, int maxWeight, int i, vector<vector<int>> &dp)
{
    if (i == 0)
    {
        if (weight[0] <= maxWeight)
        {
            return value[0];
        }
        else
            return 0;
    }
    if (dp[i][maxWeight] != -1)
    {
        return dp[i][maxWeight];
    }

    int include = 0;
    if (weight[i] <= maxWeight)
    {
        include = value[i] + knapsackR(weight, value, maxWeight - weight[i], i - 1);
    }
    int exclude = 0 + knapsackR(weight, value, maxWeight, i - 1);
    dp[i][maxWeight] = max(include, exclude);
    return dp[i][maxWeight];
}
// bottom up approch

int knapsack(vector<int> wt, vector<int> val, int n, int maxWeight)
{
    vector<vector<int>> dp(n, vector<int>(maxWeight + 1, 0));
    // step2 base case ;
    for (int w = wt[0]; w <=maxWeight; w++)
    {
        if (wt[0] <= maxWeight)
        {
            dp[0][w] =val[0];
        }
        else
        {
            dp[0][w] = 0;
        }
    }

    // Build table dp[][] in bottom up manner
    for (int i = 0; i < n; i++)
    {
        for (int w = 0; w <= maxWeight; w++)
        {
            if (wt[i] <= w)
            {
                dp[i][w] = max(val[i] + dp[i - 1][w - wt[i]], dp[i - 1][w]);
            }
            else
            {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    return dp[n - 1][maxWeight];
}
signed main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        int n;
        int mxw;
        vector<int> val;
        vector<int> wg;
        cin >> n >> mxw;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            val.push_back(k);
        }

        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            wg.push_back(k);
        }

        int ans = knapsack(wg, val, n, mxw);
        cout << ans << endl;
    }
    return 0;
}