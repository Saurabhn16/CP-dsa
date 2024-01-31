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
        int a[n]; int e=0;
        int  o=0;
        //  int k=a[0];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
           
            
        }
         sort(a, a + n);
           int k=a[0];
        for (int i = 0; i < n; i++)
        {
           k=k&a[i];
           
            
        }
           
        // sort(a, a + n);
        // if(e==1&&o==1)
        // {
        //      cout<<0<<endl;
        // }
        // else { 
        //     cout<<(a[0]&a[n])<<endl;
        // }
        cout<<k<<endl;
    }
    return 0;
}