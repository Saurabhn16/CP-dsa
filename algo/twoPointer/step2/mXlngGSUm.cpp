#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    // long long t;
    // cin >> t;
    // while (t--)
    {
        long long n, m;
        cin>>n>>m;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int l = 0;
        int res = 0;
        int sum = 0;
        int b = 0;
        for (int r = 0; r < n; r++)
        {
            sum += a[r];

            while (sum > m)
            {
                sum -= a[l];
                l++;
            }
            res = max(res, r - l + 1);
        }

        cout << res << endl;
    }
    return 0;
}