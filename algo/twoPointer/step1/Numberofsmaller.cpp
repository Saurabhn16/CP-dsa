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
        int l =  m;
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
      

        while (i < n || j < m)
        {
            if (a[i] < b[j] && ((j == m) || i < n))
            {
          
                i++;
            
            }
            else
            {
                c[k] = i;
                j++;
                k++;
            }
        }
        for (int i = 0; i < l; i++)
        {
            cout << c[i] << " ";
        }
        cout << endl;
    }
    return 0;
}