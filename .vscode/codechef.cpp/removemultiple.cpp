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
        // cout<<n<<m<<endl;
        int a[m];
        int sum=n*(n+1)/2;
        for (int i = 0; i < m; i++)
        {
            cin >> a[i];
          sum-=a[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}