#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long ao, b;
        cin >> ao >> b;
        long long x[4];

     x[0] = lcm(ao, b);
    x[1] =__gcd(ao, b);
     x[2] = b;
         x[3] = ao ;
        long long min = INTMAX_MAX;
        for (long long i = 1; i < 4; i++)
        {
            long long z = __gcd(b,x[i]);
            long long t = lcm(ao, x[i]) - z;
            if (t < min)
            {
                min = t;
            }
        }

        cout << min << endl;
    }
    return 0;
}