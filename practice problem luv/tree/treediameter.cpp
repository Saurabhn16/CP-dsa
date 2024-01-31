#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e5 + 10;
vector<int> g[N];

int depth[N];

// O(V+E)

void dfs(int vertex, int par = -1)
{
    for (int child : g[vertex])
    {
        // take actin on child before entering the child node
        if (child == par)
        {
            continue;
        }
        depth[child] = depth[vertex] + 1;
        dfs(child, vertex);
    }
}
signed main()
{

    long long n;
    cin >> n;
  
    for (int i = 0; i < n; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }

    dfs(1);
    int mx_depth = -1;
    int mx_d_node;
    for (int i = 1; i <= n; i++)
    {
        if (mx_depth < depth[i])
        {
            mx_depth = depth[i];
            mx_d_node = i;
        }
        depth[i] = 0;
    }
       dfs(mx_d_node);
       mx_depth=-1;
         for (int i = 1; i <= n; i++)
    {
        if (mx_depth < depth[i])
        {
            mx_depth = depth[i];
            mx_d_node = i;
        }
        depth[i] = 0;
    }
    cout<<mx_depth<<endl;
    // Adjacency matrix
    //  O (N^2) -space complexity
    //  N<=10^3
    // Adjacency list
    //  O(N+M)

    return 0;
}