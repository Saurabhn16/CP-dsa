//#define KPR_111


#include<bits/stdc++.h>
using namespace std;


using ll= long long;
typedef pair<ll, ll>          pll;
typedef vector<ll>            vll;
typedef vector<pll>           vpll;
typedef vector<string>        vs;
typedef unordered_map<ll,ll>  umll;
typedef map<ll,ll>            mll;
#define pb                    push_back
#define eb                    emplace_back
#define sz                    size()
#define maxpq                 priority_queue<int>
#define minpq                 priority_queue<int, vector<int>, greater<int> >
#define f                     first
#define s                     second
#define vi                    vector<int>
#define vvi                   vector<vi>
#define vb                    vector<bool>
#define pii                   pair<int,int>
#define vpi                   vector<pii>
#define vvb                   vector<vb>
#define YES                   cout << "YES" << "\n"
#define NO                    cout << "NO" << "\n"
#define prDouble(x)           cout << fixed << setprecision(10) << x
#define ispowoftwo(n)         (!(n & (n-1)))
#define fo(i,m,n)             for(ll i=(ll)(m);i<(ll)(n);i++)
#define rep(i,n)              fo(i,0,n)
#define rl(i,n,m)             for(int i=n;i>=m;i--)
#define all(v)                v.begin(),v.end()
#define uniq(v)               (v).erase(unique(all(v)),(v).end()) //if you sort it and use you get uniqe elements
#define mem(a, b)             memset(a, (b), sizeof(a))
#define ct(x,v)               count(v.begin(),v.end(),x)
#define mxe(v)                *max_element(v.begin(),v.end())
#define mne(v)                *min_element(v.begin(),v.end())
#define endl                  "\n"
#define inf                   (1LL<<30)


#ifdef KPR_111
#include "debug.h"
#else
#define deb(...)
#endif


const int Number = 1e6 + 5;
vector<int> primes;
bool prime[Number];
void seive(){
    mem(prime, true);
    prime[0] = prime[1] = false;
    for(int i = 2; i * i <= Number; i++){
        if(prime[i]){
            for(int j = i * i; j <= Number; j += i){
                prime[j] = false;
            }
        }
    }
    for(int i = 2; i <= Number; i++){
        if(prime[i]) primes.pb(i);
    }
}

int searchforanswer(vi x, int n, int k) {
    int ans = 0;
    for (int a = n; a >= 1; a /= 2) {
        while ( x[ans+a] <= k) ans += a;
    }
    return ans;
}

const int M=1e9+7;

void solve(){
    int n,m;
    cin>>n>>m;
    vi a(n);
    rep(i,n){
        cin>>a[i];
    }
    //dp[i][j] is the no of arrays of size i such that last element is j
    vector<vector<int>> dp(n+1,vector<int> (m+1,0));
    fo(i,1,n+1){
        fo(j,1,m+1){
            if(i==1){
                if(a[i-1]==j||a[i-1]==0){
                    dp[i][j]=1;
                }
            }
            else if(a[i-1]!=0 and a[i-1]!=j){
                dp[i][j]=0;
            }
            else{
                dp[i][j]=((dp[i-1][j]+dp[i-1][j-1])%M+dp[i-1][j+1])%M;
            }
        }
    }
    ll ans=0;
    rep(i,m+1){
        ans=(ans+dp[n][i])%M;
    }
    cout<<ans<<endl;

}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt = 1;
    // cin >> tt;
    for(int t = 0; t < tt; t++) {
        //cout << "Case #" << t+1 << ": ";
        solve();
        //cout << endl;
        #ifdef KPR_111
            cout << "__________________________" << endl;
        #endif
    }
}