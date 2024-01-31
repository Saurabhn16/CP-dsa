#include <bits/stdc++.h>
using namespace std;
#define int long long
string intToBinary(int num) {
  string binary;

  if (num == 0) {
    return "0";
  }

  while (num > 0) {
    int rem = num % 2;
    binary = to_string(rem) + binary;
    num /= 2;
  }

  return binary;
}
signed main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<int> mask(n, 0);
        for (int i = 0; i < n; i++)
        {
            int num_workers;
            cin >> num_workers;
            int mask1 = 0;
            for (int i = 0; i < num_workers; i++)
            {
                int day;
                cin >> day;
                mask1 = (mask1 | (1 << day));
            }
            mask[i] = mask1;
        }
        for (int  i = 0; i < n; i++)
        {
        cout<<mask[i]<<" "<<intToBinary(mask[i])<<endl;
        }
        int mx=-1;
        for (int i = 0; i < n; i++)
        {for (int  j = i+1; j < n; j++)
        {
        int intersection =(mask[i]&mask[j]);
       
        int common_days=__builtin_popcount(intersection);
         mx=max(mx,common_days);
        cout<<i<<" "<<j<<" "<<common_days<<endl;
        }
        
        }cout<<"mx ="<<mx<<endl;
        
        
    }

    

return 0;
}