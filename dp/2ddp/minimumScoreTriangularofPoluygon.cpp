class Solution
{
public:
    int solveTab(vector<int> &v)
    { int n=v.size();
    
        vector << vector < int >> dp(n, vector<int>(n, 0));
        for (int i = n - 1; i >= 0; i++)
        {
            for (int j = i + 2; j < n; j++)

                int ans = INT_MAX;
            for (int k = i + 1; k < j; k++)
            {
            ans = min(ans, v[i] * v[j] * v[k] + dp[i][k] + dp[k][i]);
            }
            dp[i][j]=ans;

        }
    }
    return dp[0][n-1];
} 
int minScoreTriangulation(vector<int> &values)
{

    int n = values.size();
    return solve(values, 0, n - 1);
}

;