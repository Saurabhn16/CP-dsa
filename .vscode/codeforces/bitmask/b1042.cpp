#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    // long long t;
    // cin >> t;
    // while (t--)
    {
        long long n;
        cin >> n;
        int a[n];
        string s[n];
        string b[n];
        string abc="ABC";
        for (int i = 0; i < n; i++)
        {

            cin >> a[i];

            cin >> s[i];
        }
        for (int i = 0; i < n; i++)
        {
            b[i] = "000";
            int l=s[i].size();
            // cout<<l<<endl;
            for (int j = 0; j <l; j++)
            {
                if (s[i][j] == abc[0])
                {
                    b[i][2] = '1';
                }
               
                if (s[i][j] == abc[1])
                {
                  b[i][1] = '1';
                }
                if (s[i][j] == abc[2])
                {
                     b[i][0] = '1';
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " " << s[i] << " " << b[i] << endl;
        }
    }
    return 0;
}