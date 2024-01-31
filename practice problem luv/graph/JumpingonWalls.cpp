#include <bits/stdc++.h>
using namespace std;
#define int long long
bool v[2][1000005];
int n, k;
string path[2];
void dfs(int c, int r, int w)
{
    if (path[c][r] != '-' || r < w || v[c][r])
    {
        return;
    }
    if (r + k >= n)
    {
        cout << "YES" << endl;
        exit(0);
    }
    v[c][r] = true;
    dfs((c + 1) % 2, r + k, w + 1);
    dfs(c, r + 1, w + 1);
    dfs(c, r - 1, w + 1);
}
signed main()
{
    
    cin >> n >> k >> path[0] >> path[1];

    dfs(0, 0, 0);
    cout<<"NO"<<endl;
    return 0;
}
