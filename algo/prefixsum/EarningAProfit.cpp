#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, A;
        cin >> n >> A;
        int c[n];
        int d[n];
        for (int i = 0; i < n; i++)
        {
            cin >> c[i] >> d[i];
            // cout<<c[i]<< " "<<d[i];
        }
        // cout<<endl;
        int pc[n+1];
  
        for (int i = 0; i < n; i++)
        {
            pc[i+1] = pc[i] + c[i];
        }
        int mx1 = 0;
        for (int i = 0; i < n; i++)
        {
            int mx = d[i];
            int mn = d[i];
            for (int j = i; j < n; j++)
            {
                 mx = max(mx, d[j]);
                 mn = min(mn, d[j]);

                // cout << mx << " " << mn<<" ";

                int cp = pc[j+1] - pc[i];
              
                // cout << cp << " ";
                int a = (j - i + 1) * A;
                // cout << a << " ";
                int sum = a - cp - ((mx - mn) * (mx - mn));
                // cout << sum << endl;
                mx1 = max(sum, mx1);
            }
            // cout << endl;
        }
        cout << mx1 << endl;
    }
    return 0;
}