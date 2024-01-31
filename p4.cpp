class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {

        vector<int> ans;
        int n = matrix.size();
        int m = matrix[0].size();
        int ct = n * m;
        int ct1 = m;
        vector<vector<int>> vis(n, (vector<int>(m, 0)));
        int x = 0;
        int y = 0;
        int xe = n;
        int ye = m;
        for (int i = 0; i <= ct + 1; i++)
        {
            for (int j = y; j < ye; j++)
            {
                ans.push_back(matrix[x][j]);
            }
            for (int i = x; i < xe; i++)
            {
                ans.push_back(matrix[i][y]);
            }
         for (int j = ye-1; j>=0 ; j--)
            {
                ans.push_back(matrix[xe][j]);
            }
             for (int i = xe-1; i>=0 ; i--)
            {
                ans.push_back(matrix[i][ye]);
            }

        }
        return ans;
    }
};