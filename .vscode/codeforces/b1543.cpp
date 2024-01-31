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
        int ct = 0;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            ct += a[i];
        }

        int b[n];
        for (int i = 0; i < n; i++)
        {
            b[i] = ct / n;
        }
        int k = ct % n;
        // cout<<k<<endl;;
        for (int i = 0; i < k; i++)
        {
            b[i] += 1;
        }

        // for (int  i = 0; i < n; i++)
        // {
        //     cout<<b[i]<<" ";
        // }
        // cout<<endl;
        int sum = k*(n-k);
        //  cout<<ct<<" "<<ct/n<< endl;;
     
        // cout << endl;
        cout << sum << endl;
    }
    return 0;
}