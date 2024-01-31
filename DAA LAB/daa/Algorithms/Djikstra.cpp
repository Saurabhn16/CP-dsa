/* Bhavik Agarwal (bhavik_2001) */
#include<bits/stdc++.h>
using namespace std;

const int INF = 1000000000;
void shortestPath(int src, vector<vector<pair<int, int>>> adj, int n){
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

    vector<int> dist(n, INF);

    pq.push(make_pair(0, src));
    dist[src] = 0;
 
    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        for (auto edge : adj[u]) {
            int v = edge.first;
            int weight = edge.second;
 
            if (dist[v] > dist[u] + weight) {
                dist[v] = dist[u] + weight;
                pq.push(make_pair(dist[v], v));
            }
        }        
    }
}

void dijkstra(int s,vector<vector<pair<int, int>>> adj, vector<int> & d, vector<int> & p) {
    int n = adj.size();
    d.assign(n, INF);
    p.assign(n, -1);
    vector<bool> u(n, false);

    d[s] = 0;
    for (int i = 0; i < n; i++) {
        int v = -1;
        for (int j = 0; j < n; j++) {
            if (!u[j] && (v == -1 || d[j] < d[v]))
                v = j;
        }

        if (d[v] == INF)
            break;

        u[v] = true;
        for (auto edge : adj[v]) {
            int to = edge.first;
            int len = edge.second;

            if (d[v] + len < d[to]) {
                d[to] = d[v] + len;
                p[to] = v;
            }
        }
    }
}

vector<int> restore_path(int s, int t, vector<int> const& p) {
    vector<int> path;

    for (int v = t; v != s; v = p[v])
        path.push_back(v);
    path.push_back(s);

    reverse(path.begin(), path.end());
    return path;
}

int main(){
    int n,m;
    cin >> n >> m;

    vector<vector<pair<int,int>>> adj(n);

    //O(m)
    int u,v,w;
    for(int i = 0;i<m;i++){
        cin >> u >> v >> w;
        if(w < 0){
            w = INF;
        }
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }

    vector<int> d;
    vector<int> p;
    // dijkstra(0,adj,d,p);
    shortestPath(0,adj,n);

    // for(int i = 0;i<n;i++){
    //     cout << d[i] << " ";
    // }

    return 0;
}