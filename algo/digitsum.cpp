#include <bits/stdc++.h>
using namespace std;
#define int long long
int digit_sum(int n)
{
    if (n == 0)
        return 0;
    return digit_sum(n / 10) + n % 10;
}
signed main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, m;
        cin >> n >> m;
        cout << digit_sum(n) << " " << digit_sum(m);
        cout << endl;
    }
    return 0;
}