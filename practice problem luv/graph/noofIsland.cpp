//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
void dfs(vector<vector<char>>& grid, int row, int col, int numRows, int numCols) {
        // Check if the current cell is out of bounds or already visited
        if (row < 0 || col < 0 || row >= numRows || col >= numCols || grid[row][col] != '1') {
            return;
        }
        
        // Mark the current cell as visited
        grid[row][col] = '0';
        
        // Perform DFS on the neighboring cells
        dfs(grid, row + 1, col, numRows, numCols);     // Down
        dfs(grid, row - 1, col, numRows, numCols);     // Up
        dfs(grid, row, col + 1, numRows, numCols);     // Right
        dfs(grid, row, col - 1, numRows, numCols);     // Left
        dfs(grid, row + 1, col + 1, numRows, numCols); // Diagonal down-right
        dfs(grid, row - 1, col - 1, numRows, numCols); // Diagonal up-left
        dfs(grid, row + 1, col - 1, numRows, numCols); // Diagonal down-left
        dfs(grid, row - 1, col + 1, numRows, numCols); // Diagonal up-right
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int numRows = grid.size();
        if (numRows == 0) {
            return 0;
        }
        
        int numCols = grid[0].size();
        int numIslands = 0;
        
        for (int i = 0; i < numRows; i++) {
            for (int j = 0; j < numCols; j++) {
                if (grid[i][j] == '1') {
                    // Found a new island, increment the count and perform DFS
                    numIslands++;
                    dfs(grid, i, j, numRows, numCols);
                }
            }
        }
        
        return numIslands;
    }

};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends