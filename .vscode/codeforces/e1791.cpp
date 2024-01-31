#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        int a[n];
        int ct = 0;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] < 0)
            {
                a[i] = -1 * a[i];
                ct++;
            }
            else
            {
            }
            sum += a[i];
        }
        if (ct % 2 ==0){
             cout<<sum<<endl;
        }
        else{
             sort(a,a+n);

             cout<<sum-(2*a[0])<<endl;
        }
    }
    return 0;
}