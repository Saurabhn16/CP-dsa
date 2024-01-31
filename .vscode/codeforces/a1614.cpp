#include <bits/stdc++.h>
using namespace std;

int main()
{
    int lng;
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, l, r, k;
        cin >> n >> l >> r >> k;
        long long a[n];

        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        long long ct = 0;

        for (long long i = 0; i < n; i++)
        {

            if ((l <= a[i] && a[i] <= r) && k >=a[i])
            {
                {
                    ct++;
                    k = k - a[i];
                }
            }
        }

        cout << ct << endl;
    }
}