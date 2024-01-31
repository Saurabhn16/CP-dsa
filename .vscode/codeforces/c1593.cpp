#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, m;
        cin >> m >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int b[n];
        for (int i = 0; i < n; i++)
        {
            b[i] = abs(a[i] - m);
            if (a[i] > m)
            {
                b[i] += i;
            }
        }

        sort(b, b + n);
        int ct = 0;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += b[i];
            if ( sum<m)
            {
                ct++;
            }

            // cout << b[i] << " ";
        }
        // cout << endl;
        cout << ct << " " << endl;
    }
    return 0;
}