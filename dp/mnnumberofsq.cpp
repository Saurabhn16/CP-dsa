#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long n;
    cin >> n;
    vector<int> dp(n + 1, INT_MAX);
    dp[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        /* code */

        for (int j = 1; j * j <= n; j++)
        {
            if (i >= j * j)
            {
                /* code */

                dp[i] = min(dp[i], 1 + dp[i - j * j]);
            }
        }
    }

    cout << dp[n] << endl;

    return 0;
}