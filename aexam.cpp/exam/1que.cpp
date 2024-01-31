// n(logn)
#include<bits/stdc++.h>
using namespace std;

void addEdge(int u, int v, vector<int> adj[]){
    adj[v].push_back(u);
    adj[u].push_back(v);
}

void dfs(int node, vector<int> &visited, vector<int> adj[], vector<int> &time, vector<int> &fast, int &k, set<int> &s, int parent)
{

    visited[node] = 1;
    time[node] = fast[node] = k;
    k++;
    int child = 0;
    for (int i = 0; i < adj[node].size(); i++)
    {

        if (adj[node][i] == parent)
        {
            continue;
        }
        else if (visited[adj[node][i]] == 1)
        {
            fast[node] = min(fast[node], time[adj[node][i]]);
        }
        else
        {

            dfs(adj[node][i], visited, adj, time, fast, k, s, node);
            fast[node] = min(fast[node], fast[adj[node][i]]);

            if (time[node] <= fast[adj[node][i]] && parent != -1)
            {
                s.insert(node);
            }

            child++;
        }
    }
    if (parent == -1 && child > 1)
    {
        s.insert(node);
    }

    return;
}
vector<int> func(int V, vector<int> adj[])
{
    vector<int> time(V, 0);
    vector<int> fast(V, 0);
    vector<int> visited(V, 0);
    set<int> s;
    int k = 0;
    for (int i = 0; i < V; i++)
    {
        if (visited[i] == 0)
        {
            dfs(i, visited, adj, time, fast, k, s, -1);
        }
    }
    vector<int> ans;
    for (auto i : s)
    {
        ans.push_back(i);
    }
    if (ans.size() == 0)
    {
        ans.push_back(-1);
    }
    return ans;
}



int main()
{
    int v, e;
    cin>>v>>e;
    vector<int> adj[v];
    for(int i = 0; i < e; i++){
        char v1, v2;
        cin >> v1 >> v2;
        int u = v1 - 'a';
        int v = v2 - 'a';
        addEdge(u,v,adj);
    }

    vector<int> ans = func(v, adj);
    for (auto i : ans)
    {
        cout << i;
    }

    
   
    return 0;
}
