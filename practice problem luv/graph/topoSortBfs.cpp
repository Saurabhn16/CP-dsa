#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Graph {
public:
    int V; // Number of vertices
    vector<vector<int>> adj;

    Graph(int V) : V(V) {
        adj.resize(V);
    }

    void addEdge(int u, int v) {
        adj[u].push_back(v);
    }

    vector<int> topologicalSort() {
        vector<int> inDegree(V, 0); // Initialize in-degrees of all vertices to 0
        for (int u = 0; u < V; ++u) {
            for (int v : adj[u]) {
                inDegree[v]++;
            }
        }

        queue<int> q;
        for (int u = 0; u < V; ++u) {
            if (inDegree[u] == 0) {
                q.push(u);
            }
        }

        vector<int> result;
        while (!q.empty()) {
            int u = q.front();
            q.pop();
            result.push_back(u);

            for (int v : adj[u]) {
                inDegree[v]--;
                if (inDegree[v] == 0) {
                    q.push(v);
                }
            }
        }

        return result;
    }
};

int main() {
    int V = 6; // Number of vertices
    Graph graph(V);
    graph.addEdge(5, 2);
    graph.addEdge(5, 0);
   
