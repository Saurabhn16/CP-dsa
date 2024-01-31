// saurabh_1610
#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n, 0);
        vector<int> b(n, 0);
        vector<pair<int, int>> vp;
        vector<int> pref(n+1,0);
        vector<int> maxi(n+1,INT_MIN);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            vp.push_back({b[i], a[i]});
        }
        sort(vp.begin(),vp.end(),[](auto a,auto b){
            if(a.first==b.first){
                return b.second<a.second;
            }
            return a.first<b.first;
        });
        pref[0]=0;
        for(int i=1;i<=n;i++){
            //cout<<vp[i].first<<" "<<vp[i].second<<endl;
            pref[i]=pref[i-1]+vp[i-1].first;
        }
        maxi[n]=0;
        for(int i=n-1;i>=0;i--){
            maxi[i]=max(maxi[i+1],vp[i].second);
        }
        for(int i=0;i<n;i++){
           cout<<vp[i].first<<" ";
        }cout<<endl;
        for(int i=0;i<n;i++){
           cout<<vp[i].second<<" ";
        }cout<<endl;
        for(int i=0;i<=n;i++){
            cout<<pref[i]<<" ";
        }cout<<endl;
        for(int i=0;i<=n;i++){
            cout<<maxi[i]<<" ";
        }cout<<endl;
        int ansi=INT_MAX;
        for(int i=1;i<=n;i++){
            ansi=min(ansi,max(pref[i],maxi[i]));
        }
        cout<<ansi<<endl;
    }
    return 0;
}