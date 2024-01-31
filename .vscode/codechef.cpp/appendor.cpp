#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long  t;
    cin >> t;
    while (t--)
    {
        long long  n, y;
        cin >> n >> y;
        long long  a[n];
        for (long long  i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long  bt = a[0];
        for (long long  i = 1; i < n; i++)
        {
            bt = bt | a[i];
            // cout<<bt<<" ";
        }
        long long  o = y-bt;
        long long k=o|bt;
        if (k==y)
        {
            cout <<o << endl; 
        }
        else {cout<<"-1"<<endl;}
        
       
    }
    return 0;
}