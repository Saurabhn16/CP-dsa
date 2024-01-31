//prim's algorithm
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int V = 5;
    // cin>>V
    //(node, wt)
    vector<vector<int>> adj[V];
    adj[0] = {{1,2}, {2,1}};
    adj[1] = {{0,1}, {1,1}};
    adj[2] = {{1,1}, {4,2}, {3,2}};
    adj[3] = {{4,1}, {2,2}};
    adj[4] = {{2,2}, {3,1}};

    int minweight = 0;

    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    //wt, node
    pq.push({0,0});
    vector<int> visited(V, -1);

    while(pq.empty() == false){
        int node = pq.top().second;
        int wt = pq.top().first;
        pq.pop();
         if(visited[node] == 1){
            continue;
         }
        visited[node] = 1;
        minweight += wt;

        for(auto val : adj[node]){
            int nd = val[0];
            int weight = val[1];

            if(visited[nd] == -1){
                pq.push({weight, nd});
            }

        }

    }

    cout<<minweight<<endl;

     


    
    return 0;
}

//intution is greedy we are choosing the minimum edge from each vertex with the help of priority queue 
//time complexity is ElogE
//space coplexity is E


