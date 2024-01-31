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
        int b[n], c[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            c[i] = a[i] + 1;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        // for (int i = 0; i < n; i++)
        // {
        //     cout << a[i] << " " << c[i] << " " << b[i] << endl;
        // }

        sort(a, a + n);
        sort(b, b + n);
        sort(c, c + n);
        int bol = 1;
        for (int i = 0; i < n; i++)
        {
            if (b[i] == a[i] || b[i] == c[i])
            {
            }
            else
            {
                bol = 0;
            }
        }
        if (bol == 1)
        {
            cout << "YES" << endl;
        }

        else
        {
            cout << "NO" << endl;
        };
    }
    return 0;
}