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
        long long n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a, a + n);
        reverse(a, a + n);
        int k = n / 2;
        // cout << k << endl;
        int za = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {

                int z = (a[i] % a[j]);
                bool exists = std::find(a, a + n, z) != a + n;
                // cout<<za<<"   "<<k<<endl;
                if (za <= k)
                {
                    if (!exists)
                    {
                        cout << a[i] << " " << a[j] << "";
                        cout << endl;
                        // cout << za << " " << n << endl;
                      
                    }
                      za++;
                }
                else {
                     break;
                }
            }
        }
    }
    return 0;
}