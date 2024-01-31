class Solution
{
public:
    int solve(vector<int> &obstacles, int currlane, int pos)
    {
        int n = obstacles.size();
        if (pos == n)
        {
            return 0;
        }
        if (obstacles[pos + 1] != currlane)
        {
            return solve(obstacles, currlane, pos + 1);
        }
        else
        {
            int ans = INT_MAX;
            for (int i = 0; i <= 3; i++)
            {
                if (currlane != i && obstacles[pos] != i)
                    ans = min(ans, 1 + solve(obstacles, i, pos));
            }
            return ans;
        }
    }
    int tab(vector<int> &obstacles)
    {
        vector<vector<int>> dp(4, vector<int>(obstacles.size(), INT_MAX));
        {
            dp[0][n] = 0;
            dp[1][n] = 0;
            dp[2][n] = 0;
            dp[3][n] = 0;
            for (int pos = n - 1; pos >= 0; pos--)
            {
                for (int lane = 1; lane <= 3; lane++)
                {
                    if (obstacles[pos + 1] != lane)
                    {
                        dp[lane][pos] = dp[lane][pos + 1];
                    }
                    else
                    {
                        int ans = INT_MAX;
                        for (int i = 0; i <= 3; i++)
                        {
                            if (lane != i && obstacles[pos] != i)
                                ans = min(ans, 1 + dp[i][pos]);
                        }
                        dp[lane][pos] = ans;
                    }
                }
            }
            return min({dp[2][0] , dp[1][0]+1,dp[3][0]+1});     }
    }
    int minSideJumps(vector<int> &obstacles)
    {
        return solve(obstacles, 2, 0);
    }
};