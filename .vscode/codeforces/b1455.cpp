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
        // cout<<n<<" =";
        int m = 0;
        int z = 0;
        for (int i = 1; i <= n; i++)
        {

            int k = (i * (i + 1)) / 2;
            // cout << i << " -" << k << " " << endl;
            if (n == k)
            {
                // cout << "ans= ";
                z = 1;
                cout << i << endl;
                ;
                break;
            }
            if (n == k - 1)
            {
            //    / cout << "ans= ";

                z = 1;
                cout << i + 1 << endl;
                ;
                break;
            }
            if (n>k)
            {
                m++;
            }
            else{
                m++;break;
            }
            
        }
        if (z == 0)
        {

         cout << m<< endl;
        }
    }
    return 0;
}