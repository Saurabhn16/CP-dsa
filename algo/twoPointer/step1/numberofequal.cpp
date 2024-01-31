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
        cin >> n >> m;
        int a[n];
        int b[m];
        int l = m;
        int c[l];
        int d[l];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        sort(a, a + n);
        sort(b, b + m);
        int i = 0;
        int j = 0;
        int k = 0;
        int ct = 0;
        int m1 = 0, n1 = 0;
        while (i < n && j < m)
        {
            int c = 0;
            int d = 0;
            if (a[m1] == b[n1])
            {
                while (a[m1] == b[j])
                {
                    j++;
                    d++;
                }
                while (b[n1] == a[i])
                {
                    i++;
                    c++;
                }
            }
            // else
            {
                m1 = i;
                n1 = j;
                if (a[m1] > b[n1] &&( (i < n && j < m)))
                {

                    j++;
                }
                else if(a[m1]<b[n1]&&( (i < n && j < m)))
                {
                    i++;
                }
            }
            // cout << c << d << endl;

            ct += c * d;
        }
        cout << ct << endl;
    }

    return 0;
}