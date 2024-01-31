#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        int count = 1;
        if (s[0] == '1')
        {
            count++;
        }
        for (int i = 1; i < n; i++)
        {
            if (s[i] == '1' && count % 2 == 0)
            {
                cout << "-";
                count++;
            }

            else if (s[i] == '1' && count % 2 != 0)
            {
                count++;
                cout << "+";
            }

            else if (s[i] == '0')
            {
                cout << "+";
            }
        }
        cout << endl;
    }

    return 0;
}