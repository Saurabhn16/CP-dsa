#include <bits/stdc++.h>
using namespace std;

int  main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long  n;
        cin >> n;
        long long  a[n]; long long  sum =0;
        for (long long  i = 0; i < n; i++)
        {
            cin>> a[i];
            sum=sum+a[i];
        }
        if (sum%n==0)
        {
             cout<<"0";
}
        else {cout<<"1";}

        cout<<endl;
    } 
}