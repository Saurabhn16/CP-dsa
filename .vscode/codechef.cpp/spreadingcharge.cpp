#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, m, o;
        cin >> n >> m >> o;
        long long mn = min(m, o);
        m = m - mn;
        o = o - mn;
        if (m > o)
        {
           
             long long mx = min(m, n);
            m = m - mx;
            n = n - mx;
        }
        else
        { long long mx = min(m, n);
            m = m - mx;
            n = n - mx;
             long long mx1 = min(o, n);
            o = o - mx1;
            n = n - mx1;
           
        }
       
        if (n >0)
        {
            cout << "yes" << endl;
        }

        else
        {
            cout << "no" << endl;
        }
    }
    return 0;
}