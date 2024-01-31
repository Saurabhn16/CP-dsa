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
    dist[0]=0;
    vector<int>parent(v);
    for(int i=0;i<v;i++){
        parent[i]=i;
    }
    vector<bool>vis(v,false);
    pq.push({0,0});
    int sum=0;
    while(!pq.empty()){
        auto it=pq.top();
        int dis=it.first;
        int node=it.second;
        pq.pop();
        if(vis[node])continue;
        vis[node]=1;
        sum+=dis;
        for(auto it:adj[node]){
            int adjNode=it.first;
            int eweight=it.second;
            if(!vis[it.first]){
            if(eweight<dist[adjNode]){
                dist[adjNode]=eweight;
                    pq.push({eweight,adjNode});
                    parent[adjNode]=node;
                }
            }
        }
    }
    cout<<sum<<endl;
    vector<pair<int,int>>graph;
    for(int i=0;i<parent.size();i++){
        graph.push_back({i,parent[i]});
    }
    for(int i=0;i<graph.size();i++){
        cout<<graph[i].first<<" "<<graph[i].second<<endl;
    }
	return 0;
}