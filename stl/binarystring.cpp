
#include <bits/stdc++.h>
using namespace std;

// Driver Code
int main()
{
    int x;
    cin >> x;
    while (x--)
    {

        string s, t;
        cin >> s >> t;

        long long n = t.length();
        long long cc = 0;
        long long co = 0;
        long long ct = 0;
        long long cy = 0;

        // Storing the count of 1's in the string
        for (long long i = 0; i < n; i++)
        {
            {
                if (s[i] == '1')
                    cc++;
                else
                {
                    co++;
                }
            }
            {
                if (t[i] == '1')
                    ct++;
                else
                {
                    cy++;
                }
            }
        }

        long long d;
        d = min(cc, cy) + min(ct, co);
        string u ="";
        for (long long i = 0; i < d; i++)
        {
            u += '1';
        }
        for (long long i = d; i < n; i++)
        {
            u += '0';
        }

       cout<<u;

        cout << endl;
    }
    return 0;
}