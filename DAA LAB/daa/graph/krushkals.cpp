#include<bits/stdc++.h>
using namespace std;

//Kruskal's Algorithm

int main()
{
    int n, m;
    cin >> n >> m;

    vector<pair<int,pair<int,int>>> edges;
    for(int i = 0;i<m;i++){
        int u, v, w;
        cin >> u >> v >> w;

        edges.push_back({w,{u,v}});
    }

    sort(edges.begin(), edges.end()); // Mlog(m)

    vector<int> treeId(n);
    for(int i =0;i<n;i++){
        treeId[i] = i;
    }

    int cost = 0;
    vector<pair<int,pair<int,int>>> result;

    for (auto e : edges) {
        int u = e.second.first;
        int v = e.second.second;

        // This if condition will be true exactly N-1 times as it will introduce an edges between the two vertices
        if (treeId[u] != treeId[v]) {
            cost += e.first;
            result.push_back(e);

            int oldId = treeId[u], newId = treeId[v];

            // O(n)
            for(int i = 0;i<n;i++){
                if (treeId[i] == oldId){
                    treeId[i] = newId;
                }
            }
        }
    }

    cout << cost << endl;

    for(auto e : result){
        cout << e.second.first << " " << e.second.second << endl;
    }

}