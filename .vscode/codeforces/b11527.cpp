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
        string s;
        cin >> n >> s;
        int a = 0;
        // if (n == 1)
        // {
        //     cout << "BOB" << endl;
        // }
        // else
        {

            if (n % 2 == 0)
            {
                for (int i = 0; i < n; i++)
                {
                    if (s[i] == '0')
                    {
                        a++;
                    }
                }

                {
                    cout << "BOB" << endl;
                }
            }
            else
            {

                for (int i = 0; i < n; i++)
                {
                    if (s[i] == '0')
                    {
                        a++;
                    }
                }
                if (a % 2 != 0)
                {
              if (s[(n) / 2] == '0' && a!=1)
                    {
                        cout << "ALICE" << endl;
                    }

                    else
                    {
                        cout << "BOB" << endl;
                    }
                }
                else
                {
                    cout << "BOB" << endl;
                }
            }
        }
    }
    return 0;
}