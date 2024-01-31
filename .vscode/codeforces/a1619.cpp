#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int p = 0;
        if (s.size() % 2 == 0)
        {
            for (int i = 0; i < (s.size() ) / 2; i++)
            {
                if (s[i] != s[i + s.size() / 2])
                {
                    p = 1;
                }
            }
            if (p == 0)
            {
                cout << "YES" << endl;
            }

            else
                cout << "NO" << endl;
        }

        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}