//divisior sieve
#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e5 + 1;
vector<int> divisors[N];
int sum[N];
void Divisors()
{
    for (int i = 2; i < N; i++)
    {
        for (int j = i; j < N; j += i)
        {
            divisors[j].push_back(i);
            sum[j] += i;
        }
    }
}

signed main()
{

    for (int i = 0; i < 10; i++)
    {
        for (auto div : divisors[i])
        {
            cout << div << " ";
        }
        cout << endl;
    }

    int t;
    cin >> t;

    while (t--)
    {
        long long n;

        cin >> n;
    }

    return 0;
}