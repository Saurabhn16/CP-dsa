#include <bits/stdc++.h>
using namespace std;
#define int long long
cont int N = 1e3 + 10;
// non weight
vector<int> graph2[N];
// weighted graph
vector<pair<int, int>> graph3[N];

int graph[N][N];
signed main()
{

    long long n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int v1, v2, wt;
        cin >> v1 >> v2 >> wt;
        graph[v1][v2] = 1;
        graph[v2][v1] = 1;
        graph2[v1].push_back(v2);
        graph2[v2].push_back(v1);
        // weight graph
        graph3[v1].push_back({v2, wt});
        graph3[v2].push_back({v1, wt});
    }
    // Adjacency matrix
    //  O (N^2) -space complexity
    //  N<=10^3
    // Adjacency list
    //  O(N+M)

    return 0;
}