#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        // cout << t << endl;
        long long n;
        cin >> n;
        int a[n];
        int sum = 0;
        int bol = 1;
        for (int i = 0; i < n; i++)
        {

            cin >> a[i];
            //  cout << a[i] << " ";
            sum += a[i];
            if (n >= 3)
            {


                if (sum -i< ((i - 1) * (i) / 2))
                {
                    bol = 0;
                }
            }
            else 
            {
                if (sum < i)
                {
                    bol = 0;
                }
            }
        }
        // cout << endl;
        // cout<<bol<<endl;
           {
            if (bol==1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        // cout<<avg<<endl;
    }
    return 0;
}