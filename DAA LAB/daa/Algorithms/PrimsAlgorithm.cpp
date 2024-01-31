/* Bhavik Agarwal (bhavik_2001) */
#include<bits/stdc++.h>
using namespace std;

// Prim's Algorithm

int spanningTree(int n, vector<pair<int,int>> adj[]){
    //Min Heap
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    vector<bool> vis(n, false);
    pq.push({0,0});

    int sum = 0;

    while(!pq.empty()){
        auto it = pq.top(); //log(E)
        pq.pop();

        int node = it.second;
        int weight = it.first;

        if(vis[node]) continue;
        
        vis[node] = 1;
        sum += weight;

        //Time Complexity: E log(E)
        for(auto child : adj[node]){
            int adjNode = child.first;
            int adjWeight = child.second;

            if(!vis[child.first]){
                pq.push({adjWeight, adjNode}); //log(E)
            }
        }
    }

    return sum;
}

int main(){
    int n, m;
    cin >> n >> m;

    vector<pair<int,int>> adj[n];
    for(int i = 0;i<m;i++){
        int u, v, w;
        cin >> u >> v >> w;

        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }

    cout << spanningTree(n,adj) << endl;
    
}