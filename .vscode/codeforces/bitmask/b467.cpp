#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{

    {
        long long n, m, k;
        cin >> n >> m >> k;
        int l = m + 1;
        int p[m + 1];
        for (int i = 0; i < m + 1; i++)
        {
            cin >> p[i];
        }

        int ct = 0;
        for (int i = 0; i < m; i++)
        {

            int x = p[m] ^ p[i];
            int ko = __builtin_popcount(x);
            if (ko <= k)
            {
                ct++;
            }
        }

        cout << ct << endl;
        ;
    }
    return 0;
}