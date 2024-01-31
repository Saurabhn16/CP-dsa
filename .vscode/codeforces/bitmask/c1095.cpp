#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    // long long t;
    // cin >> t;
    // while (t--)
    {
        // vector<int> ans;
        long long n, m;
        cin >> n >> m;
        if (m < __builtin_popcount(n) || m > n)
        {
            cout << "NO\n";
            return 0;
        }
        cout << "YES" << endl;
        

        int mo = __builtin_popcount(n);
        map<int, int> bits;
        for (int i = 0; i < 32; i++)
        {
            if (n & (1 << i))
            {
                bits[i]++;
            }
            
        }

        while (mo < m)
        {
            for (int i = 32 - 1; i >= 0; i--)
            {
                if (bits[i] > 0)
                {
                    bits[i]--;
                    bits[i - 1] += 2;

                    break;
                }
            }
            mo++;
        }
        //print 
        for (int i = 0; i < 32; i++)
        {
            while (bits[i] > 0)
            {
                bits[i]--;
                cout << (1 << i) << " ";
            }
        }
        // cout << endl;
        cout << endl;
    }
    return 0;
}