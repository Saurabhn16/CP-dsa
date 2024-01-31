#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, m;
        cin >> n;
        if (n % 2 == 0)
        {
            if (n % 4 == 0)
            {

                for (int i = 0; i < n / 2; i++)
                {
                    cout << i << " " << n / 2 + i << " ";
                }
                cout << endl;
            }
            else
            {
                int x = log2(n);
                int y = pow(2, x + 1);
                int xo = 0;

                for (int i = 3; i <= n; i++)
                {
                    cout << i << " ";
                    xo = xo ^ i;
                }
                int z = xo ^ y;
                cout << y << " " << z << endl;
            }
        }
        else
        {

            if (n == 3)
            {
                cout << "2 1 3 " << endl;
            }
            else
            {
                if ((n - 1) % 4 == 0)
                {
                    cout << 0 << " ";
                    for (int i = 0; i < n / 2; i++)
                    {
                        cout << n / 2 + i + 2 << " " << i + 2 << " ";
                    }
                    cout << endl;
                }
                else
                {

                    int x = log2(n);
                    int y = pow(2, x + 1);
                    int xo = 0;

                    for (int i = 3; i <= n; i++)
                    {
                        cout << i << " ";
                        xo = xo ^ i;
                    }

                    int z = xo ^ (y + 1);
                    cout << y + 1 << " " << z;
                    cout<<endl;
                }
            }
        }
    }
    return 0;
}