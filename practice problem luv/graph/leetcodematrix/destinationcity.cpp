class Solution
{
public:
    string dfs(string vertex, vector<int> g[N], bool &vis[N])
    {
        // Take action on vertex after entering the vertex
        // cout << vertex << endl;
        vis[vertex] = true;
            if (!g[vertex])
            {
                return vertex;
            }

        for (string child : g[vertex])
        {
            // take action on child before entering the child node
            // cout << "par :" << vertex << ", child " << child << endl;
            if (vis[child])
                continue;

            if (!g[child])
            {
                return child;
            }

            dfs(child);
            // take action on child after existing child node
        }
        // take action on vertex befor exiting the vertex
        return NULL;
    }
    string destCity(vector<vector<string>> &paths)
    {
        int n = edges.size();

        int N = 1e5 + 10;
        vector<string> g[N];
        bool vis[N];

        for (auto x : paths)
        {
            g[x[0]].push_back(x[1]);
        }

        string str = dfs(g[0][0], g, vis, );
        return str;
    }
};