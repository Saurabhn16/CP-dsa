#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, m;
        cin >> n >> m;
        int mn = min(n, m);
        int i = 0;
        if (mn % 2 == 0)
        {
            i = 1;
        }
        if (i ==1)
        {
            if (n - mn >= 2)
            {
                cout << "CHEF" << endl;
            }
            else
            {
                cout << "CHEFINA" << endl;
            }
        }
        else {
            if (m - mn >= 2)
            {
                cout << "CHEFINA" << endl;
            }
            else
            {
                cout << "CHEF" << endl;
            }
        }
    }
    return 0;
}