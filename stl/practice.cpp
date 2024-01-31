/* Author : Chaitanya Darwai */
#include <bits/stdc++.h>
using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// template<class T>
// using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// // cmp -> less_equal<T> : for multiset

#define ION                  ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL)
#define rep(i,a,b,c)         for(int i=a; i<b; i+=c)
#define rrep(i,a,b)          for(int i=b-1; i>=a; i--)
#define vec                  vector
#define pb                   push_back
#define all(x)               (x).begin(),(x).end()
#define sz(x)                (int)((x).size())
#define ff                   first
#define ss                   second
typedef             ;
typedef vec<int>             vi;
typedef vec<ll>              vl;
typedef        ;
typedef pair<ll,ll>          pll;
typedef vec<pii>             vii;
typedef vec<pll>             vll;
const double eps = 1e-8;
const ll linf = (ll)(1e18)+1;
// const int P = 1e9+7;
const int P = 998244353;
const int N = 1e5+1;
// Before getline(cin, str) : cin.ignore(numeric_limits<streamsize>::max(),'\n');
// For float precision :  cout << fixed << setprecision(8) <<

void solve(int tcn){
    int n;
    cin >> n;
    vl a(n);
    for(auto &i : a) cin >> i;
    auto cb = [](ll x){
        return (x*x*x)%P;
    };
    auto sq = [](ll x){
        return (x*x)%P;
    };
    ll s = a[0], ssq = sq(a[0]), scu = cb(a[0]);
    ll ans = scu;
    rep(i,1,n,1){
        scu += (i+1)*cb(a[i]);
        scu += 3*ssq*a[i];
        scu += 3*sq(a[i])*s;

        ssq += (i+1)*sq(a[i]);
        ssq += 2*a[i]*s;

        s += (i+1)*a[i];

        scu %= P;
        ssq %= P;
        s %= P;
        ans += scu;
    }
    cout << ans%P;
}

signed main(){
    ION;

    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);

    // int test = 1;
    cin >> test;
    rep(i,0,test,1){
        solve(i+1);
        cout << '\n';
    }
    return 0;
}