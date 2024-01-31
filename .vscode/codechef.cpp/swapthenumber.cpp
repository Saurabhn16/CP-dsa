#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        int a[n];
        int b[n];
        for (int i = 0; i < n; i++)
        {

            cin >> a[i];
            b[i]=max(a[i]-i,i-a[i]);
            cout << i + 1 << " " << a[i] << endl;
        }
 
        for (int  i = 0; i < n; i++)
        {
            cout << b[i] << " ";
        }
        cout<<endl;
        
   cout << endl;
    }

    return 0;
}