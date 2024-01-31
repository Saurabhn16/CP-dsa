#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    
    {
        long long n, m;
        cin >> n >> m;
        int a[n];
        int b[m];
        int l = n + m;
        int c[l];
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
        while (i < n && j < m)
        {
            if (a[i] < b[j])
            {
                c[k] = a[i];
                i++;
                k++;
            }
            else
            {
                c[k] = b[j];
                j++;
                k++;
            }
        }
        while (i<n)
        {     c[k] = a[i];
                i++;
                k++;

        }
        while (j<m)
        {
             c[k] = b[j];
                j++;
                k++;
        }

        // while (i < n || j < m)
        // {
        //     if (a[i] < b[j] && ((j == m) || i < n))
        //     {
        //         c[k] = a[i];
        //         i++;
        //         k++;
        //     }
        //     else
        //     {
        //         c[k] = b[j];
        //         j++;
        //         k++;
        //     }
        // }
        for (int i = 0; i < l; i++)
        {
            cout << c[i] << " ";
        }
        cout << endl;
    }
    return 0;
}