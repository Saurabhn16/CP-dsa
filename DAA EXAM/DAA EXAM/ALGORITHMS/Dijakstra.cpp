#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
    cin >> n >> m;

    vector<pair<int,int>> adj[n+1];
    for(int i = 0;i<m;i++){
        int u, v, w;
        cin >> u >> v >> w;

        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<int> dist(n+1,INT_MAX);
    dist[0]=0;
    pq.push({0,0});
    while(!pq.empty()){
        int weight=pq.top().first;
        int node=pq.top().second;
        pq.pop();
        for(auto it: adj[node]){
            int edgeWeight=it.second;
            int n=it.first;
            if(weight+edgeWeight<dist[n]){
                dist[n]=weight+edgeWeight;
                pq.push({dist[n],n});
            }
        }   }
    for(int i=1;i<n+1;i++)cout<<dist[i]<<" ";
	return 0;
}


//complexities
/*
  1.Dijkstra: (e+v)logv
  2.Huffman coding:Nlogn
  2.job sequencing:O(nlogn+ n + n*m +k)=O(n*m)
  3.optimal merge: O((n-1)max(O(findmin),O(insert)))
  5.kruskal:elogv
  4.prims:(v+e)logv
  3.trvaeling slaesman: n^2(logn base 2)
*/