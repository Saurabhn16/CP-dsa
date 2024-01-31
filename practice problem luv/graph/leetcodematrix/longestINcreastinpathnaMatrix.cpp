class Solution
{
public:
    int dfs(int i, int j, int curr, vector<vector<int>> &image, vector<vector<int>> &dp)
    {
        int n = image.size();
        int m = image[0].size();
        if (i < 0 || j < 0 || i >= n || j >= m)
        {
            return 0;
            
        }
        if (dp[i][j] != 0)
        {
            return dp[i][j];
        }
        int mxl = 1;
        if (i > 0 && image[i - 1][j] > curr)
        {
            mxl = max(mxl, 1 + dfs(i - 1, j, image[i - 1][j], image, dp));
        }
        if (i < n - 1 && image[i + 1][j] > curr)
        {
            mxl = max(mxl, 1 + dfs(i + 1, j, image[i + 1][j], image, dp));
        }
        if (j > 0 && image[i][j - 1] > curr)
        {
            mxl = max(mxl, 1 + dfs(i, j - 1, image[i][j - 1], image, dp));
        }
        if (j < m - 1 && image[i][j + 1] > curr)
        {
            mxl = max(mxl, 1 + dfs(i, j + 1, image[i][j + 1], image, dp));
        }
        dp[i][j] = mxl;
        return mxl;
    }

    int longestIncreasingPath(vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> dp(n, vector<int>(m, 0));

        int mxl = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                mxl = max(mxl, dfs(i, j, matrix[i][j], matrix, dp));
            }
        }
        return mxl;
    }
};
