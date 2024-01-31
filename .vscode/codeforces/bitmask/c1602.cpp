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
    int cnt[31];
    string b[n];
    for (int i = 0; i < 31; i++)
    {
      cnt[i] = 0;
      // cout<<i<<" "<<cnt[i]<<endl;
    }

    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      for (int j = 0; j < 31; j++)
      {
        if (a[i] >> j & 1)
        {
          cnt[j]++;
        }
      }
    }
    for (int i = 0; i < 31; i++)
    {
      if (cnt[i] != 0)
      {
        // cout << i << " " << cnt[i] << endl;
      }
    }

    // cout << endl;

    for (int i = 1; i <= n; i++)
    {
      bool fl = true;
      for (int j = 0; j <= 30; j++)
      {
        fl&=(cnt[j]%i==0);
      }
      if (fl)
      {
        cout << i << ' ';
      }
    }
    cout << endl;
  }
  return 0;
}