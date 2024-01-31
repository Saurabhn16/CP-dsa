#include <bits/stdc++.h>
using namespace std; 
int  main()
{
    long long  t;
    cin >> t;
    while (t--)
    {
        long long  n, z;
        cin >> n >> z;
        long long  bol = 1;
        if (n < z)
        {
            bol = 0;
        }

        long long  a;
        cin >> a;

        long long  k[a];
        for (long long  i = 0; i < a; i++)
        {
            cin >> k[i];
        }
        long long  b;
        cin >> b;
        long long  l[b];
        for (long long  i = 0; i < b; i++)
        {
            cin >> l[i];
        }
        long long  c;
        cin >> c;
        long long  m[c];
        for (long long  i = 0; i < c; i++)
        {
            cin >> m[i];
        }
        long long  d;
        cin >> d;
        long long  o[d];
        for (long long  i = 0; i < d; i++)
        {
            cin >> o[i];
        }
        long long  s[4];
        s[1] = l[b - 1] - l[0];
        s[2] = m[c - 1] - m[0];
        s[3] = o[d - 1] - o[0];
        s[0] = k[a - 1] - k[0];

        // cout<<s[0]<<" "<<s[1]<<" "<<s[2]<<" "<<s[3]<<" ";

        for (long long  i = 0; i < 4; i++)
        {

            if (s[i] == s[1] || s[i] == s[0])
            {
                s[i] = s[i] * z;
            }
            else
            {
                s[i] = s[i] * n;
            }
        }
        long long  mx = *max_element(s, s + 4);
        cout << mx ;
        cout << endl;
    }
    return 0;
}
