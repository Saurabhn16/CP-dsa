#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
  long long t;
  cin >> t;
  while (t--)
  {
    // cout << endl;
    long long n, m;
    cin >> n >> m;
    int ct = 0;
    int k = n;
    int k0=0;
    while (m > n * 10)
    { k0=1;
      n = n * 10;
    }
    if (k0==0)
    {
    ct=1;;
    }
    
    // cout<<n<<endl;
    while (n > 0) // cout << m << " " << n << " " << ct << endl;

    {

      if (k <=n*10)
      {
        ct += m / n;
      }
      else
      {
        ct += m;
      }
      m = m % n;
      n = n / 10;
      // cout << m << " " << n << " " << ct << endl;
    }
    cout<<ct<<endl;
  }
  return 0;
}