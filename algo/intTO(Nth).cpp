#include <bits/stdc++.h>
using namespace std;
#define int long long
const  int lng =1e9+7;
int  n_2_to_3_m(int n,int m){

     int ans=0;
        int k=1;
        for (int i = 0; i < 32; i++)
        {
            if (m >> i & 1)
            {
                ans += k ;
            }
            k*=n;
            k%=lng;
        }
        return ans;
}
signed main()
{

    long long t;
    cin >> t;
    while (t--)
    {
      
        int lng = 1e9 + 7;
        long long n, m;
        cin >> n >> m;
        
        int ans=n_2_to_3_m(n,m);

        cout << ans% lng << endl;
    }
    return 0;
}