#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{

    long long n, m;
    cin >> n >> m;
    int t = log2(m) + 1;

    int l = pow(2, t - 1);
    // cout << l << endl;
    while ((m & (m - 1)))
    {
        m = m % l;
        l = l / 2;

        // cout<<m<<l<<endl;
    }

    int k = log2(m) + 1;
    cout << k << endl;

    return 0;
}