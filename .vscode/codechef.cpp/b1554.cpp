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
        cin >> n >> m;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int mx = INT_MIN;
        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = i - 1; j >= 0; j--)
            {
                int k = (i + 1) * (j + 1) - m * (a[i] | a[j]);
                mx = max(mx, k);
                if ((i + 1) * (j + 1) < mx)
                {
                    break;
                }
            }
        }
        cout << mx << endl;
        ;
    }
    return 0;
}