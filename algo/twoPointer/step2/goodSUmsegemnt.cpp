#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    // long long t;
    // cin >> t;
    // while (t--)
    {
        long long n, s;
        cin >> n >> s;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int l = 0;
        int res = INTMAX_MAX;

        int sum = 0;
        int b = res;

        for (int r = 0; r < n; r++)
        {
            sum += a[r];
            while (sum -a[l]>= s)
            {
                // b = 1;
                sum -= a[l];
                l++;
          
          
            }
            if (sum>=s)
            {
               
            res = min(res, r - l + 1);
            }
          
        }

        if (res == b)
        {
            cout << -1 << endl;
        }
        else
        {

            cout << res << endl;
        }
    }
    return 0;
}

