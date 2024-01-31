//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // O(V+E)
    bool dfs(int vertex, int par, vector<int> g[], bool vis[])
    {
        // Take action on vertex after entering the vertex
        // cout<<vertex<<endl;
        vis[vertex] = true;

        bool isLoopExists = false;
        for (int child : g[vertex])
        {
            if (vis[child] && child == par)
                continue;
            // take action on child before entering the child node
            // cout<<"par :"<<vertex<<", child "<<child<<endl;
            if (vis[child])
                return true;
            isLoopExists |= dfs(child, vertex, g, vis);
            // take action on child after existing child node
        }
        // take action on vertex befor exiting the vertex
        return isLoopExists;
    }
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[])
    {
        bool vis[100000];
        for (int i = 0; i <= V; i++)
        {
            vis[i] = 0;
        }
        for (int i = 0; i < V; i++)
        {
            if (vis[i] == 1)
            {
                continue;
            }
            if (dfs(i, -1, adj, vis))
            {

                return true;
            }
        }
        return false;

        // Code here
    }
};

//{ Driver Code Starts.
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends