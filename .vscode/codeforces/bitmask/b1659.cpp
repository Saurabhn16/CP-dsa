#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        int X = m;
        int ans[n];
           for (int  i = 0; i <n; i++)
        {
     ans[i]=0;
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (m == 0 || (s[i] - '0' + X) % 2 == 1)
            {
                ans[i] = 0;
            }
            else
            {
                m--;
                ans[i]=1;
            }
        }
        ans[n - 1] = m;
        // cout<<X<<endl;
        for (int i = 0; i < n; i++)
        {
            if (( X-ans[i]) % 2){
                 s[i]='1'+'0'-s[i];
                 
            }
        }
        cout<<s<<endl;
        for (int  i = 0; i <n; i++)
        {
        cout<<ans[i]<<" ";
        }cout<<endl;
        
    }
    return 0;
}