#include <bits/stdc++.h>
using namespace std;
#define int long long
bool isPalindrom(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != s[s.size() - 1 - i])
        {
            return false;
        }
    }
    return true;
}
signed main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        if (isPalindrom(s))
        {
            cout << 0 << endl;
        }
        else
        {

            int mx = 1e18 + 7;
            int mn = mx;
            char a ='a';
            for (int  c = 0; c < 26; c++)
            {
                int ans = 0;
                int i = 0;
                int j = n - 1;
                while (i < j)
                {
                    if (s[i] == s[j])
                    {
                        i++;
                        j--;
                    }
                    else if (s[i] == a)
                    {
                        i++;
                        ans++;
                    }
                    else if (s[j] == a)
                    {
                        j--;
                        ans++;
                    }
                    else
                    {
                        ans = 0;
                        break;
                    }
                    //  cout<<ans<<" ";
                }
                if (ans == 0)
                {
                    a++;
                    continue;
                }

                mn = min(mn, ans);
                a++;
            }

            if (mn == mx)
            {
                cout << "-1" << endl;
            }
            else
            {
                cout << mn << endl;
            }
        }
    }
    return 0;
}