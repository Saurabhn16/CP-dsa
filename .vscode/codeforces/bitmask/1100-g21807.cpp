#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        int a[n];
        int pr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a, a + n);
        int b = 1;
        if (a[0] != 1)
        {
            b = 0;
        }else {

        pr[0] = a[0];
        for (int i = 1; i < n; i++)
        {
            if (pr[i - 1] < a[i])
            {
                b = 0;
                break;
            }
            pr[i] = pr[i - 1] + a[i];
        }}

        if (b)
        {

            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}