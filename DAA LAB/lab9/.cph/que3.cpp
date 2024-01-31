#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

int dp[1003][1030], n, m;
const int md = 1e9 + 7;

void d(int x = 0, int y = 0, int tls = 0, int ntls = 0)
{
    if (x == n)
        return;
    if (y >= m)
        (dp[x + 1][ntls] += dp[x][tls]) %= md;
    else
    {
        int my_mask = 1 << y;
        if (tls & my_mask)
            d(x, y + 1, tls, ntls);
        else
        {
            d(x, y + 1, tls, ntls | my_mask);
            if (y + 1 < m && !(tls & (my_mask << 1)))
                d(x, y + 2, tls, ntls);
        }
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
#ifdef LOCAL

#endif

    cin >> m >> n;
    dp[0][0] = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (1 << m); j++)
        {
            d(i, 0, j, 0);
        }
    }
    cout << dp[n][0];
}
