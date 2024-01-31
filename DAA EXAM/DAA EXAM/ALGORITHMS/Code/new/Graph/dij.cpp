#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=5,m=6,source=1;
	vector<pair<int,int> > g[n+1]; 	

	g[1].push_back({2,2});
	g[1].push_back({4,1});
	g[2].push_back({1,2});
	g[2].push_back({5,5});
	g[2].push_back({3,4});
	g[3].push_back({2,4});
	g[3].push_back({4,3});
	g[3].push_back({5,1});
	g[4].push_back({1,1});
	g[4].push_back({3,3});
	g[5].push_back({2,5});
	g[5].push_back({3,1});	

	priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int>>> pq;
	vector<int> distTo(n+1,INT_MAX);
	distTo[source] = 0;
	pq.push(make_pair(0,source));	// (dist,source)
	while( !pq.empty() ){
		int dist = pq.top().first;
		int prev = pq.top().second;
		pq.pop();
		vector<pair<int,int> >::iterator it;
		for( it = g[prev].begin() ; it != g[prev].end() ; it++){
			int next = it->first;
			int nextDist = it->second;
			if( distTo[next] > distTo[prev] + nextDist){
				distTo[next] = distTo[prev] + nextDist;
				pq.push(make_pair(distTo[next], next));2
			}
		}
	}
	cout << "The distances from source " << source <
	< " are : \n";
	for(int i = 1 ; i<=n ; i++)	cout << distTo[i] << " ";
	cout << "\n";
	return 0;
}
// going through n nodes and e edges . Logn n for pq insertion  TC =(e+v)logv

//  vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
//     {
//         // Create a set ds for storing the nodes as a pair {dist,node}
//         // where dist is the distance from source to the node.
//         // set stores the nodes in ascending order of the distances 
//         set<pair<int,int>> st; 

//         // Initialising dist list with a large number to
//         // indicate the nodes are unvisited initially.
//         // This list contains distance from source to the nodes.
//         vector<int> dist(V, 1e9); 
        
//         st.insert({0, S}); 

//         // Source initialised with dist=0
//         dist[S] = 0;
        
//         // Now, erase the minimum distance node first from the set
//         // and traverse for all its adjacent nodes.
//         while(!st.empty()) {
//             auto it = *(st.begin()); 
//             int node = it.second; 
//             int dis = it.first; 
//             st.erase(it); 
            
//             // Check for all adjacent nodes of the erased
//             // element whether the prev dist is larger than current or not.
//             for(auto it : adj[node]) {
//                 int adjNode = it[0]; 
//                 int edgW = it[1]; 
                
//                 if(dis + edgW < dist[adjNode]) {
//                     // erase if it was visited previously at 
//                     // a greater cost.
//                     if(dist[adjNode] != 1e9) 
//                         st.erase({dist[adjNode], adjNode}); 
                        
//                     // If current distance is smaller,
//                     // push it into the queue
//                     dist[adjNode] = dis + edgW; 
//                     st.insert({dist[adjNode], adjNode}); 
//                  }
//             }
//         }
//         // Return the list containing shortest distances
//         // from source to all the nodes.
//         return dist; 
//     }