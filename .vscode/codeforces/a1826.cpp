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

        int x = -1, y = 0;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            mp[a[i]]++;
        }
        if (n == 1)
        {
            if (a[0] == 0)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
        else
        {
            // cout<<endl;
            sort(a, a + n);
            reverse(a,a+n);
            for (int  i = 0; i < n; i++)
            {
            cout<<a[i]<< " ";
            }
            cout<<endl; 
            for (int  i = 0; i < n; i++)
            {
            cout<<i+1<< " ";
            }
            cout<<endl;
            
            int b = 0;
            int c = 0;
            int r = 0;
            // reverse(a, a + n);
            for (int i = 0; i < n; i++)
            {
                //  cout<<n-(i)<<" "<<a[i]<<endl;
                if (i >=a[i])
                {
                    //   cout<<a[i];

                    c++;
                    break;
                }
                else
                {
                    if (i==a[i])
                    {
                        r=1;
                        break;
                    }
                    
                   

                    b = i+1;
                }
                if (i == n - 1)
                {
                    r = 1;
                }
            }

            {
                if (r==1)
                {
                 cout<<-1<<endl;
                }
                else{
                
                // if (b<n-c)
                // {
                //    cout<<-1<<endl;
                // }
                // else
                
                    cout << b << endl;
                }

                cout << endl;
            }
        }
    }
    return 0;
}