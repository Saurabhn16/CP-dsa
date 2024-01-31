class Solution
{
public:
    void dfs(int i, int j, vector<vector<int>> &matrix, int prev, vector<vector<int>> &oceans)
    {
        int n = matrix.size();
        int m = matrix[0].size();
        if (i < 0 || i >= n || j < 0 || j >= m)
        {
            return;
        }
        if (matrix[i][j] < prev)
        {
            return;
        }
        if (oceans[i][j] == -1)
        {
            return;
        }
        oceans[i][j] = -1;

        dfs(i - 1, j, matrix, matrix[i][j], oceans);
        dfs(i + 1, j, matrix, matrix[i][j], oceans);
        dfs(i, j - 1, matrix, matrix[i][j], oceans);
        dfs(i, j + 1, matrix, matrix[i][j], oceans);
    }

    vector<vector<int>> pacificAtlantic(vector<vector<int>> &matrix)
    {
        vector<vector<int>> ans;
        int n = matrix.size();
        int col = matrix[0].size();
        vector<vector<int>> pacific(n, vector<int>(col, 0));
        vector<vector<int>> atlantic(n, vector<int>(col, 0));

        for (int i = 0; i < col; i++)
        {
            dfs(0, i, matrix, INT_MIN, pacific);
            dfs(n - 1, i, matrix, INT_MIN, atlantic);
        }
        for (int i = 0; i < n; i++)
        {
            dfs(i, 0, matrix, INT_MIN, pacific);
            dfs(i, col - 1, matrix, INT_MIN, atlantic);
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (pacific[i][j] == -1 && atlantic[i][j] == -1)
                {
                    ans.push_back({i, j});
                }
            }
        }
        return ans;
    }
};
