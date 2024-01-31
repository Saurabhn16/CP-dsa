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

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        // reverse(a, a + n);
        int b, c;
        int v = 0;

        int d = INTMAX_MAX;
        vector<int> x;
        vector<int> z;
        vector<int> y;

        if (n == 2)
        {
            sort(a, a + n);
            for (int i = 0; i < n; i++)
            {

                cout << a[i] << " ";
            }
            cout << endl;
        }
        else
        {
            sort(a, a + n);
            for (int i = 0; i < n - 1; i++)
            {
                int k = abs(a[i] - a[i + 1]);

                if (k < d)
                {
                    d = k;
                    b = a[i];
                    c = a[i + 1];
                }
          
            }
            cout << b << " ";
            int w = 0;
            // cout << endl;
            for (int i = 0; i < n; i++)
            {
                 if (w == 1)
                {
                    // cout << " y = " << a[i] << " ";
                    y.push_back(a[i]);
                }
                if ((a[i] == b && a[i + 1] == c)&&(w==0))
                {
                    i++;
                    w = 1;
                }
                if (w == 0)
                {
                    // cout << "  x = " << a[i] << " ";
                    x.push_back(a[i]);
                }

                
            }
            // cout << endl;
            for (int i = 0; i < y.size(); i++)
            {
                cout << y[i] << " ";
            }
            for (int i = 0; i < x.size(); i++)
            {
                cout << x[i] << " ";
            }
// cout<<endl;
            cout << c << endl;
        }
    }
    return 0;
}