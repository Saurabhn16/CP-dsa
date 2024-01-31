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
        int a[n][m];

        int k = 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if ((i + 1) % 2 == 0)
                {
                    a[i][j] = k;
                    k++;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if ((i + 1) % 2 != 0)
                {
                    a[i][j] = k;
                    k++;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
    
    return 0;
}