#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e5 + 10;
vector<int> g[N];
int par[N];

void dfs(int v, int p)
{
    par[v] = p;
    for (int child : g[v])
    {
        if (child == p)
        {
            continue;
        }
        dfs(child, v);
    }
}

vector<int> path(int v)
{
    vector<int> ans;
    while (v != -1)
    {
        ans.push_back(v);
        v = par[v];
    }
    reverse(ans.begin(), ans.end());
    return ans;
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

    dfs(1, -1);

    int x = 9, y = 11;

    vector<int> path_x = path(x);
    vector<int> path_y = path(y);

    cout << "Path from root to node " << x << ": ";
    for (int node : path_x)
    {
        cout << node << " ";
    }
    cout << endl;

    cout << "Path from root to node " << y << ": ";
    for (int node : path_y)
    {
        cout << node << " ";
    }
    cout << endl;

    int mn_ln = min(path_x.size(), path_y.size());
    int lca = -1;
    for (int i = 0; i < mn_ln; i++)
    {
        if (path_x[i] == path_y[i])
        {
            lca = path_x[i];
        }
        else
        {
            break;
        }
    }

    cout << "LCA of " << x << " and " << y << " is: " << lca << endl;

    return 0;
}
