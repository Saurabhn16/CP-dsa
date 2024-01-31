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
        cin >> n;
        int k = 0;
        // while (n != 0)
        if (n < 6)
        {
            k = 15;
        }
        else
        {
            if (n % 6 == 0)
            {
                n = n / 6;
                k = n * 15;
            }
            else if (n % 8 == 7)
            {
                n++;
                n = n / 8;
                k = n * 20;
            }
            else if (n % 8== 8)
            {

                n = n / 8;
                k = n * 20;
            }
            else if (n % 10 == 9)
            {
                n++;
                n = n / 10;
                k = n * 25;
            }
            else if (n % 10 == 0)
            {

                n = n / 10;
                k = n * 25;
            }

            else if (n % 6 == 5)
            {
                n++;
                n = n / 6;
                k = n * 15;
            }
        }
        cout << k << endl;
    }
    return 0;
}