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
    

        parent[a] = b;
}
      

signed main()
{

    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        make(i);
    }
    for (int i = 0; i < k; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            int a, b;
            cin >> a >> b;
            if (find(a) != find(b))
            {
                Union(a,b);
            }
        }
        if (x == 2)
        {
            int a;
            cin >> a;
            int k = find(a);
            if (k != a)
            {
                parent[k] = a;
            }
        }
        if (x == 3)
        {
            int a;
            cin >> a;
            cout << find(a) << endl;
        }
    }

    return 0;
}