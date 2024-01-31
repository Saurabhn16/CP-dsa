#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        int bol = 1;
        for (ll i = 0; i < n; i = i +3)
        { if (i+2<=n)
        {
             if (s[i + 1] != s[i + 2])
            { 
                bol = 0;
            }
        }
        
            
          
          
            
        }
        if (bol == 1)
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