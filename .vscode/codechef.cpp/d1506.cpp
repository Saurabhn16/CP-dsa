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
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        if (n % 2 == 0)
        {
            int b = 0;
 int at=0;
            for (auto i : mp)
            {
                if (i.second > n / 2)
                {at=i.second;
                    b = 1;
                }
                
                // cout << i.first << " " << i.second << endl;
            }
            if (b == 0)
                {
                    cout << 0 << endl;
                }
                else
                {

                    cout << 2*at-n << endl;
                }
        }
        if (n % 2 != 0)
        {
           
            int b = 0;int at=0;

            for (auto i : mp)
            {
                if (i.second > n / 2)
                {
                    at=i.second;
                    b = 1;
                }
                
                // cout << i.first << " " << i.second << endl;
            }
            if (b == 0)
                {
                    cout << 1 << endl;
                }
                else
                {

                    cout << 2*at -n << endl;
                }
        }
    }
    return 0;
}