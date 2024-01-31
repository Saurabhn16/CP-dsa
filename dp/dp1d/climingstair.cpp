

#include <bits/stdc++.h>
using namespace std;
int countDistinctWays(int n)
{
    vector<long long> dp(n + 1, -1);
    long long lng = 1e9 + 7;
    dp[0] = 1;
    dp[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
        dp[i] = dp[i] % lng;
    }

    return dp[n];
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        int l = countDistinctWays(n);
        cout << l << endl;
    }
    return 0;
}+