#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    // long long t;
    // cin >> t;
    // while (t--)
    {
        long long n, k;
        cin >> n >> k;
        int a[n];
        int N = 100000;
        int cnt[N];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ans = 0;
        int l = 0;
        int num = 0;
        map<int, int> mp;
        int r = 0;
        while (r < n)
        {
            mp[a[r]]++;
            if (mp.size() <=k)
            {
                ans += (r - l + 1);
            }
            else
            {
                while (mp.size() > k)
                {
                    mp[a[l]]--;
                    if (mp[a[l]] == 0)
                    {
                        mp.erase(a[l]);
                      
                    }
                      l++;
                    if (mp.size() <= k)
                    {
                        ans += (r - l + 1);
                    }
                }
            }
            r++;
        }
        cout<<ans<<endl;
    }
    return 0;
}