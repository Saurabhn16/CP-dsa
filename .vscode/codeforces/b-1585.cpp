#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ct = 0;
        int a[n];
        for (int i = 0; i < n; i++)
        {

            cin >> a[i];
        }
        int mx = *max_element(a, a + n);
        int max = a[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            if (a[i] > max)
            {
                max = a[i];
                ct++;
            }
            if (a[i] == mx)
            {
                break;
            }
        }

        cout << ct << endl;
    }

    return 0;
}