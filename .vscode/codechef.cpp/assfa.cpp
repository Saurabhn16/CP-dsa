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
        long long ct = 0, ct1 = 0;
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
        if (n % 2 == 1 || (ct1 == 0))
        {
            cout << "-1" << endl;
        }
        else
        {
            if (ct == ct1)
            {
                cout << "0" << endl;
            }
            else if (ct > ct1)
            {
                int k = ct - ct1;
                if (k % 2 == 0)
                {
                    cout << abs(k / 2) << endl;
                }
                else
                {
                    cout << abs((k + 1) / 2) << endl;
                }
            }
            else if (ct < ct1)
            {
                int k = ct1 - ct;

                if (k % 4 == 0)
                {
                    cout << abs(k / 4) << endl;
                }
                else if (k % 4 == 2)
                {
                    cout << abs((k + 6) / 4) << endl;
                }
               
            }
        }
    }
    return 0;
}
