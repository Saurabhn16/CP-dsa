// #define KPR_111

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<string> vs;
typedef unordered_map<ll, ll> umll;
typedef map<ll, ll> mll;
#define pb push_back
#define eb emplace_back
#define sz size()
#define maxpq priority_queue<int>
#define minpq priority_queue<int, vector<int>, greater<int>>
#define f first
#define s second
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define pii pair<int, int>
#define vpi vector<pii>
#define vvb vector<vb>
#define YES cout << "YES" \
                 << "\n"
#define NO cout << "NO" \
                << "\n"
#define prDouble(x) cout << fixed << setprecision(10) << x
#define ispowoftwo(n) (!(n & (n - 1)))
#define fo(i, m, n) for (ll i = (ll)(m); i < (ll)(n); i++)
#define rep(i, n) fo(i, 0, n)
#define rl(i, n, m) for (int i = n; i >= m; i--)
#define all(v) v.begin(), v.end()
#define uniq(v) (v).erase(unique(all(v)), (v).end()) // if you sort it and use you get uniqe elements
#define mem(a, b) memset(a, (b), sizeof(a))
#define ct(x, v) count(v.begin(), v.end(), x)
#define mxe(v) *max_element(v.begin(), v.end())
#define mne(v) *min_element(v.begin(), v.end())
#define endl "\n"
#define inf (1LL << 30)

#ifdef KPR_111
#include "debug.h"
#else
#define deb(...)
#endif

const int Number = 1e6 + 5;
vector<int> primes;
bool prime[Number];
void seive()
{
    mem(prime, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i * i <= Number; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= Number; j += i)
            {
                prime[j] = false;
            }
        }
    }
    for (int i = 2; i <= Number; i++)
    {
        if (prime[i])
            primes.pb(i);
    }
}

int searchforanswer(vi x, int n, int k)
{
    int ans = 0;
    for (int a = n; a >= 1; a /= 2)
    {
        while (x[ans + a] <= k)
            ans += a;
    }
    return ans;
}

int findTargetSumWays(vector<int> &nums, int target)
{
    int n = nums.size();
    long long int s = 0;
    for (int i = 0; i < n; i++)
    {
        s += nums[i];
    }
    int sum = (s + target);
    if (sum < 0)
        return 0;
    if (sum % 2 == 1)
    {
        return 0;
    }
    sum = sum / 2;
    int dp[n + 1][2 * s + 1];
    memset(dp, 0, sizeof(dp));
    dp[0][0] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 00; j <= sum; j++)
        {

            dp[i][j] = dp[i - 1][j];
            if (j - nums[i - 1] >= 0)
                dp[i][j] += dp[i - 1][j - nums[i - 1]];
        }
    }

    return dp[n][sum];
}

void solve() {}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt = 1;
    cin >> tt;
    for (int t = 0; t < tt; t++)
    {
        // cout << "Case #" << t+1 << ": ";
        solve();
// cout << endl;
#ifdef KPR_111
        cout << "__________________________" << endl;
#endif
    }
}