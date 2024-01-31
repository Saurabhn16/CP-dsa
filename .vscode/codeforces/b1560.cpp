#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, m, l;
        cin >> n >> m >> l;

        long long d = (abs(n - m));
        long long lng = 2 * d;
        long long k;
        if (l > d)
        {
            k = l - d;
        }

        else
        {
            k = d + l;
        }

        if ((lng >= n && lng >= m && lng >= l))
        {
            cout << k << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}