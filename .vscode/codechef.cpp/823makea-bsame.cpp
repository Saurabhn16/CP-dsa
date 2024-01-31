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
        int bol = 1;
        int a[n];
        int a0[n];
        int a1[n];
        int a01[n];
        int a11[n];
        int ct = 0;
        int ct1 = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            if (a[i] == 0)
            {
                ct++;
            }
            if (a[i] == 1)
            {
                ct1++;
            }
        }

        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        {
            for (int i = 1; i < n - 1; i++)
            {
                if (b[i] == 0 && a[i] == 1)
                {
                    bol = 0;
                    break;
                }
                if ((b[i] == 0 && a[i] == 0))
                {
                }
                if (b[i] == 1 && a[i] == 1)
                {
                }
                if ((b[i] == 1 && a[i] == 0) && (ct1 == 0))
                {
                    bol = 0;
                    break;
                }
            }
        }
        // if (a[0] == 0 && b[0] == 1 && (ct1 == 0))
        // {
        //     bol = 0;
        // }
        // if (a[n - 1] == 0 && b[n - 1] == 1 && (ct1 == 0))
        // {
        //     bol = 0;
        // }
        if (a[0] !=b[0] )
        {
            bol = 0;
        }
        if (a[n - 1] !=b[n - 1])
        {
            bol = 0;
        }

        if (bol == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}