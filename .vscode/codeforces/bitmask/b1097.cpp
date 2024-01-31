

#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    long long t;
    cin >> t;
    vector<int> arr;
    for (int i = 0; i < t; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    bool ct = false;
    int n = (1 << t);
    for (int mask = 0; mask < n; mask++)
    {
        int sum = 0;
        for (int i = 0; i < t ;i++)
        {
            if (mask & (1 << i))
            {
                sum += arr[i];
            }
            else
            {
                sum -= arr[i];
            }
           
        }
         if (sum % 360 == 0)
            {
                cout << "YES" << endl;
                return 0;
            }
    }
    cout << "NO" << endl;
    
}