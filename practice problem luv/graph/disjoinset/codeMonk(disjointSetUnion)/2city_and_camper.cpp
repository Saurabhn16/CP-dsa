// saurabh_1610
#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e5 + 10;
int parent[N];
int sz[N];
multiset<int> st;

void make(int v)
{
    parent[v] = v;
    sz[v] = 1;
    st.insert(1);
}

int find(int v)
{
    if (v == parent[v])
        return v;
    return parent[v] = find(parent[v]);
}

void merge(int a, int b)
{
    st.erase(st.find(sz[a]));
    st.erase(st.find(sz[b]));
    st.insert(sz[a] + sz[b]);
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
        parent[b] = a;
        merge(a, b);
        sz[a] += sz[b];
    }
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
        int a, b;
        cin >> a >> b;
        Union(a, b);

        if (st.size() == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            int mn = LLONG_MAX;
            vector<int> ans(st.begin(), st.end());
            for (int i = 1; i < ans.size(); i++)
            {
                mn = min(ans[i] - ans[i - 1], mn);
            }
            cout << mn << endl;
        }
    }

    return 0;
}
