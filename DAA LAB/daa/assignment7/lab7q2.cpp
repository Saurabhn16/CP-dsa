#include <bits/stdc++.h>
using namespace std;


int main() {
	// your code goes here
	int n;
    cin>>n;
    vector<vector<int>>v;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        vector<int>temp;
        temp.push_back(a);
        temp.push_back(b);
        v.push_back(temp);
    }
    vector<pair<int,int>>adj[n];
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int dist=abs(v[i][0]-v[j][0])+abs(v[i][1]-v[j][1]);
            adj[i].push_back({j,dist});
            adj[j].push_back({i,dist});
        }
    }
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    pq.push({0,0});
    int cost=0;
    vector<int>vis(n,0);
    while(!pq.empty()){
        auto it=pq.top();
        pq.pop();
        int wt=it.first;
        int node=it.second;
        if(vis[node]==1){
            continue;
        }
        if(!vis[node])
        {
            vis[node]=1;
            cost+=wt;
            for(auto it:adj[node]){
                int adjNode=it.first;
                int adjwt=it.second;
                if(!vis[adjNode]){
                    pq.push({adjwt,adjNode});
                }
            }
        }
    }
    cout<<cost<<endl;
	return 0;
}