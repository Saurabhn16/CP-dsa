#include <bits/stdc++.h>
using namespace std;
void func(string s)
{
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int l = s.size();
        // cout << l << endl;
        string p = "Yes";
        int t;
        int n = 0;
        if (s[0] == 'Y')
        {
            t = 1; n=1;
        }
        else if (s[0] == 'e')
        {
            t = 2; n=1;
        }
        else if (s[0] == 's')
        {
            t = 3;
            n=1;
        }
        for (int i = 1; i < l; i++)
        {
            if (s[i] == p[t % 3])
            {
                n = 1;
                t++;
            }
            else
            {
                n = 0;
                break;
            }
        }
        if (n == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}