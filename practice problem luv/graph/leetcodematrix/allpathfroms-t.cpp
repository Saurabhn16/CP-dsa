#include <vector>

class Solution
{
public:
    void dfs(int vertex, int last, const vector<int> graph[], vector<bool> &vis, vector<int> &temp, vector<vector<int>> &ans)
    {
        vis[vertex] = true;
        temp.push_back(vertex);

        if (vertex == last)
        {
            ans.push_*back(temp);
        }
        else
        {
            for (int child : graph[vertex])
            {
                if (!vis[child])
                {
                    dfs(child, last, graph, vis, temp, ans);
                }
            }
        }

        temp.pop_back();
        vis[vertex] = false;
    }

    vector<vector<int>> allPathsSourceTarget(vector<vector<int>> &graph)
    {
        int N = graph.size();
        vector<int> g[N];
        vector<vector<int>> ans;
        vector<bool> vis(N, false); // Initialize the visited vector with N elements, all set to false.

        // Convert the input graph into an adjacency list representation.
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < graph[i].size(); j++)
            {
                int child = graph[i][j];
                g[i].push_back(child);
            }
        }

        vector<int> temp;
        dfs(0, N - 1, g, vis, temp, ans);
        return ans;
    }
};
