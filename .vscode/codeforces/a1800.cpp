#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        int l;
        cin >> l;
        string s;

        cin >> s;
        string b = "MmEeOoWw";
        int k = 0;
        int m = 1;
        for (int i = 0; i < l; i++)
        {
            if (s[i] == b[k] || s[i] == b[k + 1])
            {
                //   cout<<s[i]<<" "<<b[k]<<endl;

                if (s[i + 1] == b[k] || s[i + 1] == b[k + 1])
                {
                    k = k;
                }
               else   if (s[i + 1] == b[k + 2] || s[i + 1] == b[k + 3])

                {
                    k = k + 2;
                }
                else
                { m=0;
                    break;
                }
            }
            else
            {
                m = 0;
                break;
            }
        }
        if (m == 1)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}