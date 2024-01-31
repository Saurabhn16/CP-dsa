#include <bits/stdc++.h>
using namespace std;
#define int long long
void primeFactor(int n, vector<int> &primeFactors)
{
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            primeFactors.push_back(i);
            n /= i;
        }
    }
    if (n > 1)
    {
        primeFactors.push_back(n);
    }
}

signed main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<int> primeFactors;
        primeFactor(n, primeFactors);
        for (int prime : primeFactors)
        {
            cout << prime << " ";
        }
        cout << endl;
    }
    return 0;
}