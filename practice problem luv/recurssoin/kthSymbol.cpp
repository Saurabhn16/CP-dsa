#include <bits/stdc++.h>
using namespace std;
#define int long long
int solve(int n, int k)
{
    if (n == 1 && k == 1)
    {
        return 0;
    }
    int m = pow(2, n - 1)/2;
    if (k <= m)
    {
        return solve(n - 1, k);
    }
    else
    {
        return !solve(n - 1, k - m);
    }
}
signed main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        int l = solve(n, k);
        cout << l;
    }
    return 0;
}