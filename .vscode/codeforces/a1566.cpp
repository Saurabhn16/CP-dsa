#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long lng = 1e9;
        long long n, m;
        cin >> n >> m;
        long long l, k;
        if (m < n)
        {

            if (n / 2 >= m)
            {

                k = 0;
            }
            else
            {
                k = 1;
            }

            cout << k << endl;
        }
        else
        {
            if (n % 2 == 0)
            {
                l = n / 2 + 1;

                // k=m/n;
                k = (m ) / l;
            }
            else
            {
                l = n- (n / 2);
                k = m / l;
            }

            cout << k << endl;
        }
    }
    return 0;
}