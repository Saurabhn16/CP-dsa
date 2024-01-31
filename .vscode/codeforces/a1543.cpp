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
        cin >> n >> m;
        if (n == m)
        {
            cout << "0 0" << endl;
        }
        else
        {
            int k = n - m;
            k = abs(k);

            int z = __gcd(m, k);
            //  cout<<z<<endl;
            int mn = min(n, m);
            int ct1=mn%k;
            int ct = k- (mn % k);
            int ct0=min(ct,ct1);            

            cout << k << " " << ct0 << endl;
        }
    }
    return 0;
}