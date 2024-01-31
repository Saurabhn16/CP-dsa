#include "bits/stdc++.h"
using namespace std;



int dp[100005];
bool visited[100005];
vector<int> adj[100005];

void visit(int vertex){
	visited[vertex] = 1;
	dp[vertex] = 0;
	for(int child:adj[vertex]){
		if(!visited[child]){
			visit(child);
		}
		dp[vertex] = max(dp[vertex] , 1 + dp[child]);
	}
}

int main(){
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
	}
	
	for(int i = 1; i <= n; i++){
		if(!visited[i]){
			visit(i);
		}
	}
	
	int ans = 0;
	for(int i = 1; i<=n ; i++){
		ans = max(ans, dp[i]);
	}
	
	cout<<ans;
	
}

// There is a directed graph 
// G with 
// N vertices and 
// M edges. The vertices are numbered 
// 1,2,…,N, and for each 
// i (
// 1≤i≤M), the 
// i-th directed edge goes from Vertex 
// x 
// i
// ​
//   to 
// y 
// i
// ​
//  . 
// G does not contain directed cycles.
// Find the length of the longest directed path in 
// G. Here, the length of a directed path is the number of edges in it.