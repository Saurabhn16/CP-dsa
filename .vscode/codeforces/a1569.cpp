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
        cin >> n;
        string s;
        cin >> s;
        string a = "ab";
        int A = 0;
        int B = 0;
        int c = 0;
        int d = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if ((s[i] == 'a' && s[i + 1] == 'b' ))
            {
                c =1;
                d = i;
                break;
            }if ((s[i] == 'b' && s[i + 1] == 'a' ))
            {
                c =1;
                d = i;
                break;
            }

        
        }
        if (c == 0)
        {
            cout << "-1 -1" << endl;
        }

        else
        {
            cout << d + 1 << " " << d + 2 << endl;
        }
    }
    return 0;
}
