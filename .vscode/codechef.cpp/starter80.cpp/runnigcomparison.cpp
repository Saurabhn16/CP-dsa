#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int c = 0;
        int d = 0;
         for (int i = 0; i < n; i++)
        {
            //  cout<<a[i]<<b[i];
            if (a[i] > 2 * b[i])
            {
                c=c+1;
            }
            if (2 * a[i] < b[i])
            {
                d=d+1;
            }
        }
        cout << n-c-d<< endl;
    }
    return 0;
}