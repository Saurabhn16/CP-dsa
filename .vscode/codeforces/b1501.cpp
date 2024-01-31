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
        int b[n];
        stack<int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = 0;
        }
        int mn = a[n - 1];
        for (int i = n - 1; i >=0; i--)

        {
            int k = a[i];
            k = max(mn, k);
        
            if (k > 0)
            {
                b[i] = 1;
            }
            k--;
                mn = k;
        }
        for (int i = 0; i < n; i++)
        {
            cout << b[i] << " ";
        }
        cout << endl;
    }
    return 0;
}