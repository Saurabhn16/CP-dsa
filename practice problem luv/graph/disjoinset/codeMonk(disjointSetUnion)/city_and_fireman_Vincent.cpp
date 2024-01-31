// saurabh_1610
#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e5 + 10;
int parent[N];
int minisize[N];
int mini[N];

void make(int v)
{
    parent[v] = v;
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

        if (mini[a] > mini[b])
        {
            swap(a, b);
        }

        if (mini[a] == mini[b])
        {
            minisize[a] += minisize[b];
        }

        parent[b] = a;

        minisize[a] = minisize[a];
    }
}

signed main()
{

    int n, k;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        make(i);

        cin >> mini[i];
        minisize[i] = 1;
        // cout<<sz[i]<<" ";
    }
    cin >> k;

    for (int i = 0; i < k; i++)
    {
        int a, b;
        cin >> a >> b;
        Union(a, b);
    }

    int ct = 1;
    int lng = 1e9 + 7;
    for (int i = 1; i <= n; i++)
    {
        if (parent[i] == i)
        {
            ct *= minisize[i];
            ct %= lng;
        }
    }
    cout << ct << endl;
    return 0;
}