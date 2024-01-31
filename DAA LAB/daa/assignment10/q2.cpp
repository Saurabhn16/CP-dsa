#include <bits/stdc++.h>
using namespace std;
const int INF=1e5;
int solve(vector<vector<int>>& graph,int n){
    int dist[n];
    dist[n-1]=0;
    for(int i=n-2;i>=0;i--){
        dist[i]=INF;
        for(int j=i;j<n;j++){
            if(graph[i][j]==INF){
                continue;
            }
            dist[i]=min(dist[i],graph[i][j]+dist[j]);
        }
    }
    return dist[0];
}

int main() {
	// your code goes here
	int n,m;
    cin>>n>>m;

    vector<vector<int>>graph(n);
    vector<int>v(n,INF);
    for(int i=0;i<n;i++){
        graph[i]=v;
    }
    for (int i=0;i<m;i++) {
        int a,b,c;
        cin >>a>>b>>c;
        a--; 
        b--;
        graph[a][b]=c;
    }
    int ans=solve(graph,n);
    cout<<ans<<endl;
	return 0;
}

//time complexity--> O(n^2)
