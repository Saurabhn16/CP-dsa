#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long mn = INTMAX_MAX, mx = -INTMAX_MAX;
    
        for (int i = 0; i < n; i++)
        {
            if (a[i] < mn && a[i] >= 0)
            {
                mn = a[i];
            }
            if (a[i] > mx && a[i] < 0)
            {
                mx = a[i];
            }
        }
        int t = min(mn, -mx);
        if (t >= 0)
        {

            cout << t - 1 << endl;
        }
        else
        {

            cout << "-1" << endl;
        }
     
    }
    return 0;
}