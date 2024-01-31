#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    // long long t;
    // cin >> t;
    // while (t--)
    {
        long long n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < k; i++)
        {
            int x;
            cin >> x;
            int l = 0;
            int r = n - 1;
            bool ok = false;
            while (r >= l)
            {
                int m = (l + r) / 2;
                if (a[m] == x)
                {
                    ok = true;
                    break;
                }
                else if (a[m] < x)
                {
                    l = m + 1;
                }
                else if (a[m] > x)
                {
                    r = m - 1;
                }
            }
            if (ok)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
