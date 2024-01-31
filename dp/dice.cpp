//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    long long solveMem(int dice, int faces, int target, vector<vector<long long>> &dp)
    {

        if (target < 0)
        {
            return 0;
        }
        if (dice == 0 && target != 0)
        {
            return 0;
        }
        if (target == 0 && dice != 0)
        {
            return 0;
        }
        if (dice == 0 && target == 0)
        {
            return 1;
        }
        if (dp[dice][target] != -1)
        {
            return dp[dice][target];
        }
        long long ans = 0;
        for (int i = 1; i <= faces; i++)
        {
            ans = ans + solveMem(dice - 1, faces, target - i, dp);
        }
        dp[dice][target] = ans;
        return ans;
    }

    long long solveTab(int d, int faces, int t)
    {
        vector<vector<long long>> dp(d + 1, vector<long long>(t + 1), 0)
    }
    long long noOfWays(int M, int N, int X)
    {
        vector<vector<long long>> dp(N + 1, vector<long long>(X + 1, -1));
        dp[0][0] = 1;
        for (int dice = 1; dice < d; dice++)
        {
            for (int target = 0; target <= t; target++)
            {
                long long ans = 0l for (int i = 0; i <= faces; i++)
                {
                    if (target - i >= 0)
                    {
                        ans = ans + dp[dice - 1][target - i];
                    }
                    dp[dice][target] = ans;
                }
            }
        }

        return dp[d][t];
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int M, N, X;

        cin >> M >> N >> X;

        Solution ob;
        cout << ob.noOfWays(M, N, X) << endl;
    }
    return 0;
}
// } Driver Code Ends