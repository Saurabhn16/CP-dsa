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
        vector<int> a;

        // map<int, vector<int>> ma;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            a.push_back(k);
        }

        if (a[n - 2] > a[n - 1])
        {
            cout << -1 << endl;
        }

        else
        {
            if (a[n - 1] <0)
            {
if (is_sorted(a.begin(), a.end()))
                {
                    cout << 0 << endl;
                }

                else
                {
                    cout << -1<< endl;
                }
            }

            else
            {
                if (is_sorted(a.begin(), a.end()))
                {
                    cout << 0 << endl;
                }
                else
                {

                    cout << n - 2 << endl;
                    for (int i = 0; i <= n - 3; i++)
                    {
                        cout << i + 1 << " " << n - 1 << " " << n << endl;
                    }
                }
            }
        }
    }
    return 0;
}