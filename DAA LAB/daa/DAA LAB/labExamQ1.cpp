#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<pair<int, int>>> graph(n);
    for (int i = 0; i < m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        graph[a].push_back({b, c});
        graph[b].push_back({a, c});
    }
    vector<bool> visited(n, false);
    vector<int> dist(n, INF);
    dist[0] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, 0});
    // int total_cost = 0;
    while (!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();
        if (visited[u])
            continue;
        visited[u] = true;
        // total_cost += dist[u];
        for (auto edge : graph[u])
        {
            int v = edge.first;
            int weight = edge.second;
            if (!visited[v] && weight + dist[u] < dist[v])
            {
                if (weight < 0)
                {
                    continue;
                }
                dist[v] = weight + dist[u];
                pq.push({dist[v], v});
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (dist[i] == INF)
        {
            cout << "IMPOSSIBLE\n";
            return 0;
        }
        cout << dist[i] << " ";
    }
    cout << endl;
    // cout << "Total Cost: " << total_cost << endl;
    return 0;
}

// time complexity -- O(mlogn)