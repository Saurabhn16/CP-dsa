#include <bits/stdc++.h>
using namespace std;
int main()
{
    // long long t;
    // cin >> t;
    // while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> a;
           vector<long long> b;
        long long sum = 0;

        for (int i = 0; i < n; i++)
        {
            long long k;
            cin >> k;
            sum += k;
            a.push_back(k);
        }
        long long x, f;
        cin >> x >> f;
        long long ct = 0;
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] > x)
            { b.push_back(a[i]);
             
            }
            
        }

        cout << ct<<" ";
        long long k = 0;
        int t = 0;
        while (t == 1)
        { 
      for (int  i = 0; i < b.size(); i++)
      {
        
      }
      
        }

        cout << abs(n - k) * f;
    }
    return 0;
}