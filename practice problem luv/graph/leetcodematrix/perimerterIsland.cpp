class Solution {
public:

 void dfs(int i, int j, vector<vector<int>> &grid,int &cnt)
{
    int n = grid.size();
    int m = grid[0].size();
    if (i < 0 || j < 0 || (i >=n || j >=m)||grid[i][j]==0)
    {
        cnt++;
        return;
    } 

    if (grid[i][j] ==-1)
    {
           
        return;
    }
    grid[i][j]=-1;
    dfs(i - 1, j , grid ,cnt) ;
    dfs(i + 1, j,   grid,cnt);
    dfs(i, j - 1,   grid,cnt);
    dfs(i, j + 1,   grid,cnt);
}
    int islandPerimeter(vector<vector<int>>& grid) {
         int row=grid.size();
         int col=grid[0].size();
         int cnt=0;
         for(int i=0;i<row;i++){
              for(int j=0;j<col;j++){
                  if(grid[i][j]==1){
                       dfs(i,j,grid ,cnt);
                    
                       break;
                  }
              }
         }
         return cnt;

    }
};