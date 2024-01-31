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
        int ct1=0;int ct=0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i]==1)
            {
            ct1++;
            }  if (a[i]==0)
            {
            ct++;
            }
            
        }
        if (ct1==0)
        {
            cout<<0<<endl;
        }
     else 
        {  int k = (ct1*pow(2,ct));
         cout<<k<<endl;
        }
        
   
        
    }
    return 0;
}