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
    if (n == 1)
    {
      cout << "Yes" << endl;
      cout << m << endl;
    }
    else
    {
      if (m < n)
      {
        cout << "NO" << endl;
      }
      else
      {
        if (n % 2 == 1)
        {
          cout << "Yes" << endl;
          for (int i = 0; i < n - 1; i++)
          {
            cout << 1 << " ";
          }
          cout << m - n + 1 << endl;
        }
        else
        {
          if (m%2==0 )
          {
            cout << "Yes" << endl;
            for (int i = 0; i < n-2; i++)
            {
              cout <<  1 << " ";
            }

            cout <<(m-n+2)/2<<" "<<(m-n+2)/2<< endl;
          }
          else
          {
            cout << "No" << endl;
          }
        }
      }
    }
  }
  return 0;
}