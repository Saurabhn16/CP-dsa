#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int  hsh[100000000];
int main()
{
     {
        ll n, k;
        cin >> n>>k;
        ll a[n];
        int bol = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
           
        }
        for (int i = 0; i < n; i++)
        {
            hsh[a[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
             t = k - a[i];
            if (hsh[t] != 0&&t!=a[i])
            {
                bol = 1;
            }
        }
        if (bol==1)
        {
          cout <<"YES"<<endl;
        }
          else
        {
          cout <<"NO"<<endl;
        }
        
      
    }
    return 0;
}