#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e5 + 10;
vector<int> g[N];
bool vis[N];
int subtree_sum[N];
int even_ct[N];
// O(V+E)

void dfs(int vertex, int par = 0)
{
    // Take action on vertex after entering the vertex
    if (vertex % 2 == 0)
    {
        even_ct[vertex]++;
    }

    subtree_sum[vertex] += vertex;
    for (int child : g[vertex])
    {
        // take actin on child before entering the child node
        if (child == par)
        {
            continue;
        }
       dfs(child, vertex);
        subtree_sum[vertex] += subtree_sum[child];
       
        even_ct[vertex] += even_ct[child];
        // take action on child after existing child node
    }

}
signed main()
{

    long long n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        subtree_sum[i] = 0;
    }
    for (int i = 0; i < n-1; i++)
    { 
        int v1, v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }

    dfs(1);
    for (int i = 1; i <= n; i++)
    {
        cout << subtree_sum[i] << " " << even_ct[i] << endl;
    }

    // Adjacency matrix
    //  O (N^2) -space complexity
    //  N<=10^3
    // Adjacency list
    //  O(N+M)

    return 0;
}