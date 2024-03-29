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

string shortestCommonSupersequence(string str1, string str2)
{
    int n1 = str1.size();
    int n2 = str2.size();
    vector<vector<int>> dp(n1 + 1, vector<int>(n2 + 1));
    for (int i = 1; i <= n1; i++)
    {
        for (int j = 1; j <= n2; j++)
        {
            if (str1[i - 1] == str2[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    string ans;
    while (n1 || n2)
    {
        if (n1 == 0)
        {
            ans += str2[n2 - 1];
            n2--;
        }
        else if (n2 == 0)
        {
            ans += str1[n1 - 1];
            n1--;
        }

        else if (str1[n1 - 1] == str2[n2 - 1])
        {
            ans += str1[n1 - 1];
            n1--;
            n2--;
        }
        else if (dp[n1 - 1][n2] == dp[n1][n2])
        {

            ans += str1[n1 - 1];
            n1--;
        }
        else if (dp[n1][n2 - 1] == dp[n1][n2])
        {
            ans += str2[n2 - 1];
            n2--;
        }
    }

    reverse(ans.begin(), ans.end());
    return ans;
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