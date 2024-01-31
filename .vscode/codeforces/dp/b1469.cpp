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
        int pa[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (i == 0)
            {
                pa[i] = a[i];
            }
            else
            {
                pa[i] = pa[i - 1] + a[i];
            }
            // cout << a[i] << " ";
        }
        //  cout << endl;
        //         for (int i = 0; i < n; i++)
        //         {

        //             cout << pa[i] << " ";
        //         }
        //         cout << endl;
        long long m;
        cin >> m;
        int b[m];
        int pb[m];
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            if (i == 0)
            {
                pb[i] = b[i];
            }
            else
            {
                pb[i] = pb[i - 1] + b[i];
            }
            // cout << b[i] << " ";
        }
        // cout << endl;

        // for (int i = 0; i < m; i++)
        // {

        //     cout << pb[i] << " ";
        // }
        int mxa = *max_element(pa, pa + n);
        int mxb = *max_element(pb, pb + m);
        int z=0;
        mxa = max(z, mxa);
        mxb = max(z, mxb);
        cout << mxa + mxb << endl;
        // cout << endl;
    }
    return 0;
}