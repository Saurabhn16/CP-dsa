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

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int bol = 1;

        for (int i = 0; i < n-1; i++)
        {
            if (a[i] > a[i + 1])
            {
                bol = 0;
            }
        }

        int min = *min_element(a, a + n);
        int max = *max_element(a, a + n);
        if (bol == 1)
        {
            cout << 0 << endl;
        }
        else
        {

            if (a[0] == min || a[n - 1] == max)
            {
                cout << 1 << endl;
            }
            else
            {
                if (a[n - 1] == min &&a[0] == max)
                {
                    cout << 3 << endl;
                }
                else
                {
                    cout << 2 << endl;
                }
            }
        }
    }
    return 0;
}