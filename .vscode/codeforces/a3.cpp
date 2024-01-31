#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{

    {
        long long n, m;
        cin >> n >> m;
        int mx = max(n, m);
        int sum = 6 - mx + 1;
        if (sum == 1)
        {
            cout << "1/6" << endl;
        }
        if (sum == 2)
        {
            cout << "1/3" << endl;
        }
        if (sum == 3)
        {
            cout << "1/2" << endl;
        }
        if (sum == 4)
        {
            cout << "2/3" << endl;
        }
        if (sum == 5)
        {
            cout << "5/6" << endl;
        }   
         if (sum == 6)
        {
            cout << "1/1" << endl;
        }
       
    }
    return 0;
}