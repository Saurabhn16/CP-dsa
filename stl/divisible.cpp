#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i, n;
        long long k;
        cin >> n >> k;
        vector<long long> v;
        long long mul = 1;
         bool flag =false ;

        for (int i = 0; i < n; i++)
        {
            long long s;
            cin >> s;
            v.push_back(s);
            
        }
           for (i = 0; i < n; i++)
        {

            
                mul = (mul * v[i]) % k;
            
        }

    
      
        if (mul == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}