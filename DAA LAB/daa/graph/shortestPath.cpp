#include <bits/stdc++.h>
using namespace std;
// 1-->n 
int main() {
	int n;
    cin>>n;
    int v;
    cin>>v;
    vector<pair<int,int>>adj[v+1];
    for(int i=0;i<n;i++){
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }

    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    vector<int>dist(v+1);
    for(int i=0;i<v+1;i++){
        dist[i]=1e9;
    }
    dist[1]=0;
    vector<int>parent(v+1);
    for(int i=0;i<v+1;i++){
        parent[i]=i;
    }
    pq.push({0,1});
    while(!pq.empty()){
        auto it=pq.top();
        int node=it.second;
        int dis=it.first;
        pq.pop();
        for(auto it:adj[node]){
            int adjNode=it.first;
            int eweight=it.second;
            if(dis+eweight<dist[adjNode]){
                dist[adjNode]=dis+eweight;
                pq.push({dis+eweight,adjNode});
                parent[adjNode]=node;
            }
        }
    }
    if(dist[n]==1e9){
        return -1;
    }
    vector<int>path;
    int node=n;
    while(parent[node]!=node){
        path.push_back(node);
        node=parent[node];
    }
    path.push_back(1);
    reverse(path.begin(),path.end());
    for(int i=0;i<path.size();i++){
        cout<<path[i]<<" ";
    }

	return 0;
}