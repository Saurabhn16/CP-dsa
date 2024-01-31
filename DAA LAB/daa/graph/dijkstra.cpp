#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
    cin>>n;
    int v;
    cin>>v;
    vector<pair<int,int>>adj[v];
    for(int i=0;i<n;i++){
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }

    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    vector<int>dist(v);
    for(int i=0;i<v;i++){
        dist[i]=1e9;
    }
    int s;
    cin>>s;
    dist[s]=0;
    pq.push({0,s});

    while(!pq.empty()){
        int dis=pq.top().first;
        int node=pq.top().second;
        pq.pop();

        for(auto it:adj[node]){
            int weight=it.second;
            int adjnode=it.first;
            if(dis+weight<dist[adjnode]){
                dist[adjnode]=dis+weight;
                pq.push({dist[adjnode],adjnode});
            }
        }
    }
    for(int i=0;i<v;i++){
        cout<<dist[i]<<" ";
    }

	return 0;
}