#include <bits/stdc++.h>
using namespace std;
#define int long long
int gcd(int a, int b)
{
    if ( b == 0)
    {
        return a;
    }

    return gcd(b, a % b);
}
signed main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, m;
        cin >> n >> m;
    cout<<gcd(n,m)<<endl;
    }
    return 0;
}