#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e7 + 1;
vector<bool> isPrime(N, 1);
vector<int> lp(N, 0), hp(N, 0);
void isPrimeCond()
{

    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i < N; i++)
    {
        if (isPrime[i] == true)
        {
            lp[i] = hp[i] = i;
            for (int j = 2 * i; j < N; j += i)
            {
                isPrime[j] = false;
                hp[j] = i;
                if (lp[j] == 0)
                {
                    lp[j] = i;
                }
            }
        }
    }
}
void PrimeFactor(unordered_map<int, int> &prime_factors, int n)
{
    while (n > 1)
    {
        int prime_factor = hp[n];
        while (n % prime_factor == 0)
        {
            n /= prime_factor;
            prime_factors[prime_factor]++;
        }
    }
}
signed main()
{
    isPrimeCond();


    int t;
    cin >> t;

    while (t--)
    {
        long long n;

        cin >> n;

        unordered_map<int, int> prime_factors;

        PrimeFactor(prime_factors, n);
        for (auto it : prime_factors)
        {
            cout << it.first << " " << it.second << endl;
        }
        cout << endl;
    }

    return 0;
}