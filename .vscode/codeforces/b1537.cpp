#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, m, i, j;
        cin >> n >> m >> i >> j;
        int a[4], b[4];
        int e, f, c, d;
        e = abs(i - 1) + abs(j - 1);

        f = abs(i - 1) + abs(j - m);

        c = abs(i - n) + abs(j - 1);

        d = abs(i - n) + abs(j - m);
        a[0] = e;
        a[1] = f;
        a[2] = c;
        a[3] = d;

        sort(a, a + 4);
        if (a[3] == e)
        {
            b[0] = 1;
            b[1] = 1;
            cout << "1 1 ";
        }
        else if (a[3] == f)
        {
            b[0] = 1;
            b[1] = m;
            cout << "1 " << m << " ";
        }
        else if (a[3] == c)
        {
            b[0] = n;
            b[1] = 1;
            cout << n << " 1 ";
        }
        else if (a[3] == d)
        {
            b[0] = n;
            b[1] = m;
            cout << n << " " << m << " ";
        }
        //    cout<<endl;
        // for (int  i = 0; i < 4; i++)
        // {
        //     cout<<a[i]<<" ";
        // }

        //  cout<<endl;
        int x, y, z, w;
        x = abs(b[0] - 1) + abs(b[1] - 1);

        y = abs(b[0]-1) + abs(b[1] - m);

        z = abs(b[0] - n) + abs(b[1] - 1);

        w = abs(b[0] - n) + abs(b[1] - m);
        a[0] = x;
        a[1] = y;
        a[2] = z;
        a[3] = w;

        sort(a, a + 4);
        if (a[3] == x)
        {
            
            cout << "1 1 ";
        }
        else if (a[3] == y)
        {
           
            cout << "1 " << m << " ";
        }
        else if (a[3] == z)
        {
           
            cout << n << " 1 ";
        }
        else if (a[3] == w)
        {
           
            cout << n << " " << m << " ";
        }
        // if (a[3] == x)
        // {
        //     cout << "1 1 ";
        // }
        // else if (a[3] == b)
        // {
        //     cout << "1 " << m << " ";
        // }
        // else if (a[3] == z)
        // {
        //     cout << n << " 1 ";
        // }
        // else if (a[3] == d)
        // {
        //     cout << n << " " << m << " ";
        // }
        cout << endl;
    }
    return 0;
}