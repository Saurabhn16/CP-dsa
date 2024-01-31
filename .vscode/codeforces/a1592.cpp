#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long e;
        cin >> e;
        long long a[n];
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a, a + n);
        // cout<<a[n-1]<<a[n-2];
        if (e <= a[n - 1])
        {
            cout << "1" << endl;
        }
        else
        {
            long long ct = 0;
            int k = 0;
            while (e > 0)
            {

                if (e >= (a[n - 1] + a[n - 2]))
                {
                    // cout<<e<<endl;
                    ct = ct + 2 * (e / (a[n - 1] + a[n - 2]));
                    e = e % (a[n - 1] + a[n - 2]);
                    //  cout<<e<<endl;
                    // cout<<ct;
                }
                // cout<<e;

                if (e >= a[n - 1]&&k%2==0)
                {
                    // cout<<e<<endl;
                    ct += e / (a[n - 1]);
                    e = e % (a[n - 1]);
                    // cout<<e<<endl;
                }

                if (e >= a[n - 2]&&k%2==1)
                {
                    //  cout<<e<<endl;
                    ct += e / (a[n - 2]);
                    e = e % (a[n - 2]);
                    //   cout<<e<<endl;
                    // cout<<ct;
                }
                if (e != 0)
                {
                    ct = ct + 1;
                }
            }
            cout << ct << endl;
        }
    }
    return 0;
}