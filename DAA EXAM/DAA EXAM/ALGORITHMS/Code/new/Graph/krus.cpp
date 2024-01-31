#include<bits/stdc++.h>
using namespace std;
struct node {
    int u;
    int v;
    int wt; 
    node(int first, int second, int weight) {
        u = first;
        v = second;
        wt = weight;
    }
};

bool comp(node a, node b) {
    return a.wt < b.wt; 
}

int findPar(int u, vector<int> &parent) {
    if(u == parent[u]) return u; 
    return parent[u] = findPar(parent[u], parent); 
}

void unionn(int u, int v, vector<int> &parent, vector<int> &rank) {
    u = findPar(u, parent);
    v = findPar(v, parent);
    if(rank[u] < rank[v]) {
    	parent[u] = v;
    }
    else if(rank[v] < rank[u]) {
    	parent[v] = u; 
    }
    else {
    	parent[v] = u;
    	rank[u]++; 
    }
}
int main(){
	int N=5,m=6;
	vector<node> edges; 
	edges.push_back(node(0,1,2));
	edges.push_back(node(0,3,6));
	edges.push_back(node(1,0,2));
	edges.push_back(node(1,2,3));
	edges.push_back(node(1,3,8));
	edges.push_back(node(1,4,5));
	edges.push_back(node(2,1,3));
	edges.push_back(node(2,4,7));
	edges.push_back(node(3,0,6));
	edges.push_back(node(3,1,8));
	edges.push_back(node(4,1,5));
	edges.push_back(node(4,2,7));
	sort(edges.begin(), edges.end(), comp); 
	
	vector<int> parent(N);
	for(int i = 0;i<N;i++) 
	    parent[i] = i; 
	vector<int> rank(N, 0); 
	
	int cost = 0;
	vector<pair<int,int>> mst; 
	for(auto it : edges) {
	    if(findPar(it.v, parent) != findPar(it.u, parent)) {
	        cost += it.wt; 
	        mst.push_back({it.u, it.v}); 
	        unionn(it.u, it.v, parent, rank); 
	    }
	}
	cout << cost << endl;
	for(auto it : mst) cout << it.first << " - " << it.second << endl; 
	return 0;
}


// C++ program for the above approach

// #include <bits/stdc++.h>
// using namespace std;

// // DSU data structure
// // path compression + rank by union
// class DSU {
// 	int* parent;
// 	int* rank;

// public:
// 	DSU(int n)
// 	{
// 		parent = new int[n];
// 		rank = new int[n];

// 		for (int i = 0; i < n; i++) {
// 			parent[i] = -1;
// 			rank[i] = 1;
// 		}
// 	}

// 	// Find function
// 	int find(int i)
// 	{
// 		if (parent[i] == -1)
// 			return i;

// 		return parent[i] = find(parent[i]);
// 	}

// 	// Union function
// 	void unite(int x, int y)
// 	{
// 		int s1 = find(x);
// 		int s2 = find(y);

// 		if (s1 != s2) {
// 			if (rank[s1] < rank[s2]) {
// 				parent[s1] = s2;
// 			}
// 			else if (rank[s1] > rank[s2]) {
// 				parent[s2] = s1;
// 			}
// 			else {
// 				parent[s2] = s1;
// 				rank[s1] += 1;
// 			}
// 		}
// 	}
// };

// class Graph {
// 	vector<vector<int> > edgelist;
// 	int V;

// public:
// 	Graph(int V) { this->V = V; }

// 	// Function to add edge in a graph
// 	void addEdge(int x, int y, int w)
// 	{
// 		edgelist.push_back({ w, x, y });
// 	}

// 	void kruskals_mst()
// 	{
// 		// Sort all edges
// 		sort(edgelist.begin(), edgelist.end());

// 		// Initialize the DSU
// 		DSU s(V);
// 		int ans = 0;
// 		cout << "Following are the edges in the "
// 				"constructed MST"
// 			<< endl;
// 		for (auto edge : edgelist) {
// 			int w = edge[0];
// 			int x = edge[1];
// 			int y = edge[2];

// 			// Take this edge in MST if it does
// 			// not forms a cycle
// 			if (s.find(x) != s.find(y)) {
// 				s.unite(x, y);
// 				ans += w;
// 				cout << x << " -- " << y << " == " << w
// 					<< endl;
// 			}
// 		}
// 		cout << "Minimum Cost Spanning Tree: " << ans;
// 	}
// };

// // Driver code
// int main()
// {
// 	Graph g(4);
// 	g.addEdge(0, 1, 10);
// 	g.addEdge(1, 3, 15);
// 	g.addEdge(2, 3, 4);
// 	g.addEdge(2, 0, 6);
// 	g.addEdge(0, 3, 5);

// 	// Function call
// 	g.kruskals_mst();

// 	return 0;
// }
