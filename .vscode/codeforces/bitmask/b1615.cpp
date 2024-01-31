#include <bits/stdc++.h>
using namespace std;
#define int long long
const int M = 1e9 + 7;
const  int lng = 2e5+100;
 int a[lng][19];
signed main()
{
  long long t;
  cin >> t;
 
 

  for (int i = 0; i <= 18; i++)
  {
    a[0][i] = 0;
  }

  for (int mask = 1; mask <=lng; mask++)
  {
    

    for (int i = 0; i <= 18; i++)
    {


      if ((mask & (1 << i)))
      {

   
         a[mask][i] = 1;
      }
      a[mask][i]+=a[mask-1][i];

     
    }
  }
  while (t--)
  {
    long long n, m;
    cin >> n >> m;
    // cout<<n<<m;
    int total =m-n+1;
    int sum=INTMAX_MAX;

    for (int i = 0; i <= 18; i++)
    {
      int  sum1 = a[m][i] - a[n-1][i]  ;
           sum=min( total -sum1,sum ); 
    }

    cout << sum << endl;
  }
  return 0;
}