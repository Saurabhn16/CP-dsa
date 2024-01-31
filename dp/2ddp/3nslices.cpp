class Solution
{
public:
    int solve(int index, int mxIndex, vector<int> &slices, int n, vector<vector<int>> &dp)
    {
        if (n == 0 || index > mxIndex)
        {
            return 0;
        }
        if (dp[index][mxIndex] != -1)
        {
            return dp[index][mxIndex];
        }
        int take = slices[index] + solve(index + 2, mxIndex, slices, n - 1);
        int notTake = solve(index + 1, mxIndex, slices, n);
        dp[index][mxIndex] = max(take, notTake);
        return max(take, notTake);
    }
    int solveTab(vector<int> &slices)
    {
        int k = slices.size();
        // int n = k / 3;
        vector<vector<int>> dp(n, vector<int>(n, -1));
        vector<vector<int>> dp1(n, vector<int>(n, -1));
        for (int i = k - 2; i >= 0; i--)
        {

            for (int n = 1; n <= k / 3; n++)
            {
                int take = slices[i] + dp[i + 2][n - 1];
                int notTake = dp[i + 1][n];
                dp[i][n] = max(take, notTake);
            }

            /* code */
        }
        int case1 = dp[0][k / 3];
        for (int i = k - 1; i >= 1; i--)
        {

            for (int n = 1; n <= k / 3; n++)
            {
                int take = slices[i] + dp[i + 2][n - 1];
                int notTake = dp[i + 1][n];
                dp[i][n] = max(take, notTake);
            }
        }
        int case2 = dp[1][k / 3];

        return max(case1, case2);
    }
    int solveTabOti(vector<int> &slices)
    {
        int k = slices.size();
        vector<int> prev1(k + 2, 0);
        vector<int> prev2(k + 2, 0);
        vector<int> curr(k + 2, 0);
        vector<int> curr2(k + 2, 0);
        vector<int> next2(k + 2, 0);
        vector<int> next(k + 2, 0);
        for (int i = k - 2; i >= 0; i--)
        {

            for (int n = 1; n <= k / 3; n++)
            {
                int take = slices[i] + next1[n - 1];
                int notTake = curr1[n];
                prev1[n] = max(take, notTake);
            }

            next1 = curr1;
            curr1 = prev1;
        }
        int case1 = curr1[k / 3];
        for (int i = k - 1; i >= 1; i--)
        {

            for (int n = 1; n <= k / 3; n++)
            {

                int take = slices[i] + next2[n - 1];
                int notTake = curr2[n];
                prev2[n] = max(take, notTake);
            }

            next2 = curr2;
            curr2 = prev2;
        }
        int case2 = curr1[k / 3];

        return max(case1, case2);
    }
    int maxSizeSlices(vector<int> &slices)
    {
        int index = 0;
        int k = slices.size();
        int n = k / 3;
        vector<vector<int>> dp(n, vector<int>(n, -1));
        vector<vector<int>> dp1(n, vector<int>(n, -1));
        int first = solve(0, k - 2, slices, n, dp1);
        int last = solve(1, k - 1, slices, n, dp);
        return max(first, last);
    }
};