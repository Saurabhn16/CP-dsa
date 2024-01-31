class Solution {
public:
    bool dfs(int vertex, vector<int> g[], int destination, vector<bool>& vis) {
        vis[vertex] = true;
        if (vertex == destination) {
            return true;
        }
        for (int child : g[vertex]) {
            if (vis[child]) {
                continue;
            }
            if (child == destination) {
                return true;
            }
            if (dfs(child, g, destination, vis)) {
                return true;
            }
        }
        return false;
    }

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<int> g[n];
        vector<bool> vis(n, false);
        for (auto x : edges) {
            g[x[0]].push_back(x[1]);
            g[x[1]].push_back(x[0]);
        }
        return dfs(source, g, destination, vis);
    }
};
