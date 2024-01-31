#include <bits/stdc++.h>
using namespace std;
// #define int long long
const int N = 2e5 + 10;
int multiple_ct[N];
int hsh[N];

signed main()
{
    // long long t;
    // cin >> t;
    // while (t--)
    {
        long long n;
        cin >> n;
      
        for (int i = 0; i < n; i++)
        {  int a;
            cin >> a;
            hsh[a]++;
        }
        for (int i = 1; i < N; i++)
        {

            for (int j = i; j < N; j += i)
            {
                multiple_ct[i] += hsh[j];
            }
        }
    }
  
    int q;
    cin >> q;
    while (q--)
    {
        int a, b;
        cin >> a >> b;

        long sum = multiple_ct[a] + multiple_ct[b];
        long long  lcm = a * 1LL * b / __gcd(a, b);
        if (lcm < N)
        {
            sum -= multiple_ct[lcm];
        }
        cout << sum << endl;
    }

    return 0;
}
