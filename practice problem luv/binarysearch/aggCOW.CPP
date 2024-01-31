#include <bits/stdc++.h>
using namespace std;

const int N 1e6+10;
long long  cows; 

int  n ;
long long positions[N];
bool canPlaceCows(long long  minDist)
{int lastPos=-1;
int cows_ct=cows;
for (int  i = 0; i < n; i++)
{
if (postions[i]-lastPos>=minDist)
{
   cow_ct--;
   lastPos=postion[i];

}
if (cow_ct==0)
{break;}

}
return cows_ct==0;

}

signed main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        
        cin >> n >> cows;
        for (int i = 0; i < n; i++)
        {
            cin >> positions[i];
        }
        sort(positions,positions+n);
        int lo = 0, hi = 1e9, mid;
        while (hi - lo > 1)
        {
            mid = lo + hi / 2;

            if (canPlaceCows(mid))
            {
                lo= mid;
            }
            else
            {
                hi = mid - 1;
            }
        }
      if (canPlaceCows(hi))
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