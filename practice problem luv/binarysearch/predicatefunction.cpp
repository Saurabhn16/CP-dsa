#include <bits/stdc++.h>
using namespace std;

const int N 1e6+10;
long long  m; 

int  n ;
long long trees[N];
bool isWoodSufficient(long long  h)
{
    long long wood = 0;
    for (int i = 0; i < n; i++)
    {
        if (trees[i] >= h)
        {
            wood += (trees[i] - h);
        }
        return wood >= m;
    }
}

signed main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            cin >> trees[i];
        }
        int lo = 0, hi = 1e9, mid;
        while (hi - lo > 1)
        {
            mid = lo + hi / 2;

            if (isWoodSufficient(mid))
            {
                lo= mid;
            }
            else
            {
                hi = mid - 1;
            }
        }
      if (isWoodSufficient(hi))
      {
        cout<<hi<<endl;
      }
      else
      {
    cout<<lo<<endl;
      }
      
        

        ;
    }
    return 0;
}