#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        // int n=s.size()
        string s;
        cin >> s;
        int z[5];
        int o[5];
        int q[5];
        int z1[5];
        int o1[5];
        int q1[5];
        for (int i = 0; i < 5; i++)
        {
            z[i] = 0;
            q[i] = 0;
            o[i] = 0;
            z1[i] = 0;
            q1[i] = 0;
            o1[i] = 0;
        }
        cout << endl;

        for (int i = 0; i < 5; i++)
        {
            if (s[i] == '0')
            {
                z[i] = z[i - 1] + 1;
            }
            else
            {
                z[i] = z[i - 1];
            }

            
            if (s[i] == '1')
            {
                o[i] = o[i - 1] + 1;
            }
            else
            {
                o[i] = o[i - 1];
            }

            if (s[i] == '?')
            {
                q[i] = q[i - 1] + 1;
            }
            else
            {
                q[i] = q[i - 1];
            }
//New

            if (s[i + 1] == '0')
            {
                z1[i + 1] = z1[i + 1 - 1] + 1;
            }
            else
            {
                z1[i + 1] = z1[i + 1 - 1];
            }


            if (s[i + 1] == '1')
            {
                o1[i + 1] = o1[i] + 1;
            }
            else
            {
                o1[i + 1] = o1[i];
            }


            if (s[i + 1] == '?')
            {
                q1[i + 1] = q1[i + 1 - 1] + 1;
            }
            else
            {
                q1[i + 1] = q1[i + 1 - 1];
            }
        }

        for (int i = 0; i < 5; i++)
        {
            cout << q[i] << " " << q1[i] << endl;
        }
        cout << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << o[i] << " " << o1[i];
        }
        cout << endl;
    }
    return 0;
}