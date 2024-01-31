#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e5 + 10;
vector<int>g[N];
int vis[N];
int level[N];
void bfs(int source)
{
    queue<int> q;
    q.push(source);
    vis[source] = 1;
    while (!q.empty())
    {
        int cur_v = q.front();
        q.pop();
        cout<<cur_v<<" ";
        for (int child : g[cur_v])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = 1;
                level[child] = level[cur_v] +1 ;
            }
        }
    }
    cout<<endl;
}
// O(V+E)

    signed main()
{

    long long n, m;
    cin >> n;

    for (int i = 0; i < m; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
      }

    bfs(1);
    for (int i = 1; i <= n; i++)
    {
        cout<<i<<": " << level[i]<< endl;
    }

    // Adjacency matrix
    //  O (N^2) -space complexity
    //  N<=10^3
    // Adjacency list
    //  O(N+M)

    return 0;
}
