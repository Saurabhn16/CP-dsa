#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int hsh[4];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string b = "ruby";
        for (int i = 0; i < s.size(); i++)
        {
            hsh[s[i]]++;
        }
        int min = 1000;
        for (int i = 0; i < 4; i++)
        {
            if (hsh[b[i]] < min)
            {
                min = hsh[b[i]];
            }
        }
        for (int i = 0; i < 4; i++)
        {
            hsh[b[i]] = 0;
            
            }

            int t = min;
            cout << t << endl;
        }
        return 0;
    }