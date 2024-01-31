#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        int a[3];
        cin >> a[0] >> a[1] >> a[2];
        int sum=a[0]+a[1]+a[2];
        if (sum>=6)
        {
        cout<<"YES"<<endl;
        }
        
        else {cout<<"NO"<<endl;}
    }
    return 0;
}