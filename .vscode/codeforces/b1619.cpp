#include <bits/stdc++.h>
using namespace std;

int   main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long ct = 0;
        long long a = sqrt(n);
        long long b = cbrt(n);
        long long d= sqrt(b);
        // cout<<d<<endl;
        long long c = a + b- d;
        cout << c << endl;
    }
    return 0;
}