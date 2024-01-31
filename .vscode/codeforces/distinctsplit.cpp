#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        set<char> st;

        set<char> st1;
        int mx = 0;
        int a[n],b[n];
        for (int i = 0; i < n; i++)
        {
        // cout<<s[i]<<" "<<s[n-1-i]<<endl;
            st1.insert(s[n - 1 - i]);
            b[n-1-i] = st1.size();
            st.insert(s[i]);
            a[i]= st.size();
          
        }
     for (int i = 0; i < n-1; i++)
        {
        // cout<<a[i]<<" "<<b[i+1]<<endl;
        int sum = a[i] + b[i+1];
            mx = max(sum, mx);
        }

        cout << mx << endl;
    }
    return 0;
}