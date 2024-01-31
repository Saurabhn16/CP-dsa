// saurabh_1610
#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e5 + 10;
int parent[N];
int sz[N];
void make(int v)
{
    parent[v] = v;
    sz[v] = 1;
}
int find(int v)
{
    if (v == parent[v])
        return v;
    return parent[v] = find(parent[v]);
}
void Union(int a, int b)
{
    a = find(a);
    b = find(b);
    if (a != b)
    {
        if (sz[a] < sz[b])
        {
            swap(a, b);
        }
        parent[b] = a;4
        
        sz[a] += sz[b];
    }
}

signed main()
{

    int n, k;
    cin >> n >> k;
    for(int i=1;i<n;i++){
   make(i);
    }
    for (int i = 0; i < k; i++)
    {
        int a, b;
        cin >> a >> b;
        Union(a, b);
    }
    int ct = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i == parent[i])
        {
            ct++;
        }
    }
    cout << ct << endl;

    return 0;
}