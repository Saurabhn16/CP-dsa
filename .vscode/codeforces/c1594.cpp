#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        int n;
        char a;
        string s;
        cin >> n >> a >> s;
        // cout<<a<<0<<s;
        int ct = 0;
        vector<int> x;
        vector<int> y;
        int b = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != a)
            {
                x.push_back(i + 1);
                b = 1;
            }
            else
            {
                y.push_back(i + 1);
            }
        }
        int z = 0;
        int k = 0;
        if (y.size() > 0)
        {
            /* code */

            k = y[0];
            for (int i = 1; i < y.size(); i++)
            {
                z = 1;
                //  cout << y[i] << " ";

                k = __gcd(k, y[i]);
            }
        }
        // cout << "K=" << k << endl;

        if (b == 0)
        {
            cout << 0 << endl;
        }
        else
        {

            {
                int k0= 0;
                for (int i = n - 1; i > n / 2; i--)
                {
                    if (s[i] == a)
                    {
                        cout << 1 << endl  << i+1 << endl;
                             k0=1;
                             break;
                    }
                }

              
          if (k0==0)
                {
                    cout << 2 << endl
                         << n - 1 << " " << n << endl;
                }
            }
        }
        // cout<<endl;
    }
    return 0;
}