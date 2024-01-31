
#include <bits/stdc++.h>
using namespace std;

typedef string str;
typedef long long ll;
typedef __int128_t lll;
typedef long double ld;
typedef complex<ld> cd;

typedef pair<ll, ll> pl;
typedef pair<ld, ld> pd;

typedef vector<ll> vl;
typedef vector<ld> vd;
typedef vector<str> vs;
typedef vector<vl> vvl;
typedef vector<vd> vvd;
typedef vector<pl> vpl;
typedef vector<pd> vpd;
typedef vector<cd> vcd;

// Most of the template is from Geothermal
void __print(int x) { cerr << x; }
void __print(long x) { cerr << x; }
void __print(long long x) { cerr << x; }
void __print(unsigned x) { cerr << x; }
void __print(unsigned long x) { cerr << x; }
void __print(unsigned long long x) { cerr << x; }
void __print(float x) { cerr << x; }
void __print(double x) { cerr << x; }
void __print(long double x) { cerr << x; }
void __print(char x) { cerr << '\'' << x << '\''; }
void __print(const char *x) { cerr << '\"' << x << '\"'; }
void __print(const string &x) { cerr << '\"' << x << '\"'; }
void __print(bool x) { cerr << (x ? "true" : "false"); }

template <typename T, typename V> void __print(const pair<T, V> &x) { cerr << '{'; __print(x.first); cerr << ", "; __print(x.second); cerr << '}'; }
template <typename T> void __print(const T &x) { int f = 0; cerr << '{'; for (auto &i : x) cerr << (f++ ? ", " : ""), __print(i); cerr << "}"; }
void _print() { cerr << "]\n"; }
template <typename T, typename... V> void _print(T t, V... v) { __print(t); if (sizeof...(v)) cerr << ", "; _print(v...); }

// -DDEBUG needs to be in your compilation command
// #define dbg(x...) cerr << "\e[91m" << __func__ << ":" << __LINE__ << " [" << #x << "] = ["; _print(x); cerr << "\e[39m" << endl;
#ifdef DEBUG
#define dbg(x...) cerr << __func__ << ":" << __LINE__ << " [" << #x << "] = ["; _print(x); cerr << endl;
#else
#define dbg(x...)
#endif

vpl dir2 = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
vpl dir3 = {{1, 1}, {-1, -1}, {1, -1}, {-1, 1}};
vpl dir4 = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}, {1, 1}, {-1, -1}, {1, -1}, {-1, 1}};
template <typename T> bool inside_bound(T a, T d, T mn, T mx) {
    return mn <= a + d && a + d < mx;
}

#define pb  push_back
#define mkp make_pair
#define fi  first
#define se  second
#define sz(x)   (int)(x).size()
#define len(x)  (int)(x).size()
#define all(x)  (x).begin(), (x).end()
#define rev(x)  (x).rbegin(), (x).rend()

#define sum(a)  (accumulate(all(a), 0ll))
#define mine(a) (*min_element(all(a)))
#define maxe(a) (*max_element(all(a)))
#define mini(a) (min_element(all(a)) - (a).begin())
#define maxi(a) (max_element(all(a)) - (a).begin())
#define lob(a, x) (lower_bound(all(a), (x)) - (a).begin())
#define upb(a, x) (upper_bound(all(a), (x)) - (a).begin())
#define mxpr(a) (*max_element(all(a), [](auto &p1, auto &p2) { return p1.se < p2.se; }))
#define mnpr(a) (*min_element(all(a), [](auto &p1, auto &p2) { return p1.se < p2.se; }))


template <typename X, typename Y> bool ckmin(X &x, const Y &y) { return (y < x) ? (x = y, 1) : 0; }
template <typename X, typename Y> bool ckmax(X &x, const Y &y) { return (y > x) ? (x = y, 1) : 0; }

// freopen("input", "r", stdin);
// freopen("output", "w", stdout);

const int MOD = 1000000007;
const char nl = '\n';
const ll MX = LONG_LONG_MAX;
const ll MN = LONG_LONG_MIN;

void solve(ll test_case) {
    bool ok = true;
    str s;
    ll ans = 0;

    ll n, m;
    cin >> s;

    ll a = count(all(s), 'A');
    ll b = count(all(s), 'B');
    ll c = count(all(s), 'C');

    if (a == b + c) {
        if (s[0] == 'A') {
            replace(all(s), 'A', '(');
            replace(all(s), 'B', ')');
            replace(all(s), 'C', ')');
        } else {
            replace(all(s), 'A', ')');
            replace(all(s), 'B', '(');
            replace(all(s), 'C', '(');
        }
    } else if (b == a + c) {
        if (s[0] == 'B') {
            replace(all(s), 'B', '(');
            replace(all(s), 'A', ')');
            replace(all(s), 'C', ')');
        } else {
            replace(all(s), 'B', ')');
            replace(all(s), 'A', '(');
            replace(all(s), 'C', '(');
        }
    } else if (c == a + b) {
        if (s[0] == 'C') {
            replace(all(s), 'C', '(');
            replace(all(s), 'A', ')');
            replace(all(s), 'B', ')');
        } else {
            replace(all(s), 'C', ')');
            replace(all(s), 'A', '(');
            replace(all(s), 'B', '(');
        }
    } else {
        ok = false;
    }

    if (ok) {
        ll tot = 0;
        for (auto c : s) {
            if (c == '(') ++tot;
            else --tot;

            if (tot < 0) break;
        }

        ok = tot == 0;
    } 

    cout << (ok ? "YES" : "NO") << nl;
    return;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T = 1;
    cin >> T;
    for (ll t = 1; t <= T; ++t) {
        solve(t);
    }

    return 0;
}
