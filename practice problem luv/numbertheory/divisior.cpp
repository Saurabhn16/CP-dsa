#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve(int n)
{
    int ct = 0;
    int sum = 0;

    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " " << n / i << endl;
        
        ct++;
        sum += i;
        if (n / i != i)
        {
            ct++;
            sum += n / i;
        }}
    }
    cout << "ct -" << ct << endl
         << "sum -" << sum << endl;
}
signed main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        solve(n);
    }
    return 0;
}