#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin>>s;
        // cout<<s;
     int max=0;
        for (int i = 0; i < n; i++)
        {    
            int k = s[i]-96;
            
            if (max < k)
            {
                max = k;
            }
        }
     cout << max << endl;
    }

    return 0;
}