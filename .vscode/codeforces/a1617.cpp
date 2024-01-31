#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        string s, m;

        cin >> s >> m;
        // if (1000 - t == 55 || 1000 - t == 58)
        // {
        //     cout << t << s << m << endl;
        // }

        vector<char> l;
        for (long long i = 0; i < s.size(); i++)
        {
            l.push_back(s[i]);
        }
        sort(l.begin(), l.end());
        long long ct = 0;
        long long idx = 0;
        int nd = 0;
        for (long long i = 0; i < l.size(); i++)
        {
            if (m[1] == l[i])
            {
                idx++;
            }
        }

        if (m=="abc")
        {
            for (int i = 0; i < l.size(); i++)
            {

            }
        }

        else
        {
            for (long long i = 0; i < l.size(); i++)
            {
                cout << l[i];
            }
        }
        cout << endl;
    }
}