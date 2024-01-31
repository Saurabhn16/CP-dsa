#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    long long t;
    cin >> t;
    // cout << t << endl;
    while (t--)
    {
        long long n;
        cin >> n;
        // cout << n << endl;
        int a[n];
        vector<int> b;
        vector<int> c;
        int bol = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            // cout<<a[i]<< " ";
            if (a[i] % 2 == 0)
            {
                bol = 1;
                // cout << a[i] << " ";
                b.push_back(a[i]);
            }
           
        }
        int k=b.size();
        // cout<<"->";
        sort(a, a+n);
        reverse(a,a+n);
        for (int  i = 0; i < n; i++)
        { if (a[i] % 2 != 0)
            {
              
                b.push_back(a[i]);
            }
            // cout<<a[i]<<" ";
        }
        // cout<<endl;
        // if (bol == 0)
        // {
        //      cout << 0 << endl;
        // }
        // else
        {
            int ct = ((n*(n-1))/2)-((n-k-1)*(n-k)/2);

            for (int i = k; i < b.size(); i++)
            {
                for (int j = i + 1; j < b.size(); j++)

                {
                    int m = __gcd(b[i], 2 * b[j]);
                    if (m > 1)
                    {
                        ct++;
                    }
                }
            }

            // ct += ((n-1)* (n ) / 2) -( ((n-1) - b.size()-1) * ((n-1) - b.size() )/ 2);
            cout << ct << endl;
        }
        // cout << endl;
    }
    return 0;
}