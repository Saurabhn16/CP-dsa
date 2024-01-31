#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e5 + 10;
vector<int> g[N];
bool vis[N];
bool isLoopExists = false;
// O(V+E)
bool dfs(int vertex, int par)
{
    // Take action on vertex after entering the vertex
    // cout<<vertex<<endl;
    vis[vertex] = true;
    for (int child : g[vertex])
    {
        if (vis[child] && child == par)
            continue;
        // take action on child before entering the child node
        // cout<<"par :"<<vertex<<", child "<<child<<endl;
        if (vis[child])
            return true;
        isLoopExists |= dfs(child, vertex);
        // take action on child after existing child node
    }
    // take action on vertex befor exiting the vertex
    return false;
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

    int ct = 0;

    // Adjacency matrix
    //  O (N^2) -space complexity
    //  N<=10^3
    // Adjacency list
    //  O(N+M)

    return 0;
}