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
#define f                     first
#define s                     second
#define YES                   cout << "YES" << "\n"
#define NO                    cout << "NO" << "\n"
#define ispowoftwo(n)         (!(n & (n-1)))
#define fo(i,m,n)             for(ll i=(ll)(m);i<(ll)(n);i++)
#define rep(i,n)              fo(i,0,n)
#define rl(i,n,m)             for(int i=n;i>=m;i--)
#define all(v)                v.begin(),v.end()
#define uniq(v)               (v).erase(unique(all(v)),(v).end())
#define endl                  "\n"
void solve(){
    string s,t;
    cin>>s>>t;
    int n=s.size();
    int m=t.size();
    int dp[n+1][m+1];
    int choices[n+1][m+1];
    memset(choices,0,sizeof(choices));
    //-> i-1 choices is 1 and j-1 choices is 2 and picking the common element is 3 
    // dp[i][j] is the (string s mein i th index per hai and string t mein j th index per hai) maximum lenght of the common subsequence
    memset(dp,0,sizeof(dp));
    if(s[0]==t[0]){
        dp[0][0]=1;
        choices[0][0]=3;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            //not picking the ith character of s
            if(i>0){
                dp[i][j]=dp[i-1][j];
                choices[i][j]=1;
            }
            //not picking the jth character of t
            if(j>0){
                if(dp[i][j]<dp[i][j-1]){
                    dp[i][j]=dp[i][j-1];
                    choices[i][j]=2;
                }
            }
            //picking the ith character of s and jth character of t
            if(s[i]==t[j]){
                int ans=1;
                if(i>0&&j>0){
                    ans=1+dp[i-1][j-1];
                }
                if(ans>dp[i][j]){
                    dp[i][j]=ans;
                    choices[i][j]=3;
                }
            }
        }
    }
    // cout<<dp[n-1][m-1]<<endl;
    int x=n-1,y=m-1;
    string ans="";
    while(x>=0&&y>=0){
        if(choices[x][y]==3){
            ans+=s[x];
            x--;
            y--;
        }
        else if(choices[x][y]==1){
            x--;
        }
        else{
            y--;
        }
    } 
    reverse(all(ans));
    cout<<ans<<endl;
}
int32_t main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    long long int t;
    // cin >> t;
    t=1;
    while (t--)
    {
        solve();
    }
    return 0;
}