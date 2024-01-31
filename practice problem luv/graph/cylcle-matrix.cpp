#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e5 + 10;
vector<int> g[N];
bool vis[N];

// O(V+E)
 void dfs(int i, int j, int initialColor, int newColor, vector<vector<int>> &image)
{
    int n = image.size();
    int m = image[0].size();
    if (i < 0 || j < 0)
    {
        return;
    } if (i >=n || j >=m)
    {
        return;
    }
    if (image[i][j] !=initialColor)
    {
        return;
    }
    image[i][j] = newColor;

    dfs(i - 1, j, initialColor, newColor, image);
    dfs(i + 1, j, initialColor, newColor, image);
    dfs(i, j - 1, initialColor, newColor, image);
    dfs(i, j + 1, initialColor, newColor, image);
}
vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int newColor)
{
    int initialColor = image[sr][sc];
    if (initialColor != newColor)
    {
        dfs(sr, sc, initialColor, newColor, image);
    }
    return image;
}
signed main()
{

    long long n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }

    dfs(1);
    // Adjacency matrix
    //  O (N^2) -space complexity
    //  N<=10^3
    // Adjacency list
    //  O(N+M)

    return 0;
}