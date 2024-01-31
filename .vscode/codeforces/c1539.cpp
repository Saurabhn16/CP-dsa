#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n, k, x;
    cin >> n >> k >> x;
    vector<int> a;
    vector<int> b;
    for (int i = 0; i < n; i++)
    {
        int ko;
        cin >> ko;
        a.push_back(ko);
    }
    int ct = 0;
    int ct1 = 0;
    sort(a.begin(), a.end());
    // cout << "A ";
    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i] << " ";
    // }
    // cout << endl;
    // cout << "b ";
    for (int i = 0; i < n - 1; i++)
    {
        int bo;
        bo = a[i + 1] - a[i];
    if (bo>x)
    {
        b.push_back(bo);
    }
    
    }
    sort(b.begin(), b.end());

    // for (int i = 0; i < n - 1; i++)
    // {
    //     cout << b[i] << " ";
    // }
    // cout << endl;
    for (int i = 0; i <b.size(); i++)
    {
        // cout << k << " " << b[i] << " = ";

        
            if (b[i] % x)
            {
                if (k >= b[i] / x)
                {
                     k  =k - (b[i] / x) ;
                }
                else
                    ct++;
            }
            else
            {
                if (k >= (b[i] / x) - 1)
                {
                k = k - (b[i] / x) + 1;
                }
                else
                    ct++;
            }
        
    }

    for (int i = 0; i < n - 1; i++)
    {

        if (b[i] > x)
        {
            ct1++;
        }
        // cout << b[i] << " ";
    }
    // cout << endl;
    cout << ct + 1 << endl;

    return 0;
}
