#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{

    {
        int n;
        string s[8];
        for (int i = 0; i < 8; i++)
        {
            cin >> s[i];
        }
        set<int> x;
        set<int> y;
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                if (s[i][j] == 'W')
                {
                    x.insert(i);
                    y.insert(j);
                }
            }
        }
        int xt = 8 - x.size();
        int yt = 8 - y.size();
        int sum = xt + yt;

        if (sum == 16)
        {
            cout << 8 << endl;
        }
        else
        {
            cout << sum << endl;
         
        }
    }
    return 0;
}