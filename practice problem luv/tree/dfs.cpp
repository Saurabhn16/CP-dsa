#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e5 + 10;
vector<int> g[N];
bool vis[N];
int depth[N], height[N];
// O(V+E)
void dfs(int vertex, int par=0)
{
    // Take action on vertex after entering the vertex

    for (int child : g[vertex])
    {
        // take action on child before entering the child node
        if (child == par)
            {continue;}
        depth[child] = depth[vertex] + 1;

        dfs(child, vertex);
        height[vertex] = max(height[vertex], height[child] + 1);
        // take action on child after existing child node
    }
    // take action on vertex befor exiting the vertex
    return;
}
signed main()
{

    long long n, m;
    cin >> n ;

    for (int i = 0; i < m; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }

    dfs(1, 0);
    for (int i = 1; i <= n; i++)
    {
        cout << depth[i] << " " << height[i] << endl;
    }

    // Adjacency matrix
    //  O (N^2) -space complexity
    //  N<=10^3
    // Adjacency list
    //  O(N+M)

    return 0;
}

