
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        int a[n + 1];
        int l[n + 1];
        int h[n + 2];
        l[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= n; i++)
        {
            l[i] = __gcd(l[i-1], a[i]);
            
        }
         h[n+1] = 0;
        for (int i = n; i >= 1; i--)
        {
            h[i] = __gcd(h[i+1], a[i]);
            
        }

        while (q--)
        {
            int z, y;
            int k[n];
            cin >> z >> y;

            if (z - 1 <= 0)
            {
                l[z - 1] = 0;
            }
            if (y + 1 > n)
            {
                h[y + 1] == 0;
            }
            int d = __gcd(l[z - 1], h[y + 1]);
            cout << d << endl;
        }
    }

    return 0;
}