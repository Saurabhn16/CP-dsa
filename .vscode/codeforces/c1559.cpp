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
        int b=0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        // else
        {
            if (a[0] == 1)
            {
                cout << n + 1 << " ";

                for (int i = 0; i < n; i++)

                {
                    cout << i + 1 << " ";
                }
                cout << endl;
            }
            else if (a[n - 1] == 0)
            {

                for (int i = 0; i <= n; i++)
                {
                    cout << i + 1 << " ";
                }

                cout << endl;
            }
            else
            {
                for (int i = 0; i < n; i++)
                {
                    if ((a[i] == 0 && a[i + 1] == 1) && (b == 0))
                    {
                        cout << i+1 << " " << n + 1 << " "; 
                        b=1;
                    }

                    else
                    {
                        cout << i + 1 << " ";
                    }
                }

                cout << endl;
            }
        }
    }
    return 0;
}