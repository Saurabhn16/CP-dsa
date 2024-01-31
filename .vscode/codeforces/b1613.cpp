#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        //    axv cout << endl;
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
        int za=0;

       

        {
            for (int i = 0; i <= n/2; i++)
            {
                
                { int 
                    z = (a[i] % a[n-1]);
                  
                    if (za < k)
                    {
                       
                        {
                            cout << a[i] << " " << a[n-1] << "";
                            cout << endl;
                            // cout << za << " " << n << endl;
                            za++;
                        }
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }
    }
    return 0;
}