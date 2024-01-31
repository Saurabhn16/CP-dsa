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

        vector<int> z;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (i != a[i])
            {
                z.push_back(i);
            }
        }
        int mx=-1;
        for (int i = 0; i < z.size(); i++)
        {
          mx&=z[i];
        }
        cout << mx << endl;
    }
    return 0;
}