#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{

    {
        long long n, m;
        cin >> n >> m;
        int k = 0;
        while (((m >> k) & 1) == 0)
        {
            int l = (m >> k);
            cout << m << " " << k << "=" << l << endl;
            k++;
        }
        cout << k + 1 << endl;
    }
    return 0;
}