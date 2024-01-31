// C++ program to check for balanced brackets.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> s;
        n = s.size();
        int c = 0;

        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] != s[i + 1])
            {
                c += 1;
            }
        }
        if (c == 0)
        {
            if (s[0] == '1')
            {
                cout << "0" << endl;
            }
            else
            {
                cout << "1" << endl;
            }
        }
        if (c == 1)
        {
            cout << "1" << endl;
        }
        if (c == 2)
        {
            if (s[0] == '1')
            {
                cout << "1" << endl;
            }
            else
            {
                cout << "2" << endl;
            }
        }

        if (c > 2)
        {
            cout << "2" << endl;
        }
    }
    return 0;
}
