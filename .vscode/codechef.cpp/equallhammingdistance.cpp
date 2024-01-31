#include <bits/stdc++.h>
using namespace std;
vector<long long> fact(2e5 + 1);
long long nCk(long long n, long long k, long long p)
{
    return ((fact[n])%p *((1/(fact[k])) % p) * ((1/fact[n - k]% p))) % p;
}

int main()
{
    int lng = 1e9 + 7;
    fact[0] = 1;
    for (long long i = 1; i <= 2e5; ++i)
        fact[i] = ((fact[i - 1]%lng) * (i%lng) )% lng;

    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        string a, b;
        cin >> a >> b;

        long long sm = 0;
        long long dif = 0;
        for (long long i = 0; i < n; i++)
        {
            if (a[i] == b[i])
            {
                sm++;
            }
            if (a[i] != b[i])

            {
                dif++;
            }
        }
        if (dif % 2 != 0)
        {
            cout << "0" << endl;
        }
        else
        {

            long long p = pow(2, sm);
            long long t = (((nCk(dif,dif/2,lng)) * (p % lng)) + lng) % lng;
            t = t % lng;
            cout << t << endl;
        }
    }
}
