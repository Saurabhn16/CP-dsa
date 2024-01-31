/* Bhavik Agarwal (bhavik_2001) */
#include<bits/stdc++.h>
using namespace std;

//Disjoint Set Union - Union by size
void make_set(int v, vector<int> &parent, vector<int> &size) {
    parent[v] = v;
    size[v] = 1;
}

int find_set(int v, vector<int> &parent) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v],parent);
}

void union_sets(int a, int b, vector<int> &parent, vector<int> &size) {
    a = find_set(a,parent);
    b = find_set(b,parent);
    if (a != b) {
        if (size[a] < size[b])
            swap(a, b);
        parent[b] = a;
        size[a] += size[b];
    }
}

int main(){
    int n, m;
    cin >> n >> m;

    vector<pair<int,pair<int,int>>> edges;
    for(int i = 0;i<m;i++){
        int u, v, w;
        cin >> u >> v >> w;

        edges.push_back({w,{u,v}});
    }

    sort(edges.begin(), edges.end()); // Mlog(m)

    vector<int> parent(n,-1);
    vector<int> size(n,-1);

    for(int i = 0;i<n;i++){
        make_set(i,parent,size);
    }

    int cost = 0;
    vector<pair<int,pair<int,int>>> result;

    for(auto edge : edges){
        int weight = edge.first;
        int u = edge.second.first, v = edge.second.second;

        if(find_set(u,parent) == find_set(v,parent)) continue;

        union_sets(u,v,parent,size);

        result.push_back(edge);
        cost += weight;
    }

    cout << cost << endl;

    for(auto e : result){
        cout << e.second.first << " " << e.second.second << endl;
    }

}