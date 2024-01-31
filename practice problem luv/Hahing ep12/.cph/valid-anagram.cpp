#include <bits/stdc++.h>
using namespace std;
long long hsh1[26];
long long hsh2[26];
int main()
{
    int t;
    cin >> t;
    while (t--)

    {

        string p, s;

        cin >> p >> s;
        int pl = p.size();
        int sl = s.size();
        for (long long int i = 0; i < pl; i++)
        {
            hsh1[p[i]]++;
        }
        for (long long int i = 0; i < sl; i++)
        {
            hsh2[s[i]]++;
        }
        int count = 0;
        for (char i = 'a'; i <= 'z'; i++)
        {

            if (hsh2[i] != hsh1[i])
            {
                   return false ;

            }

            return true ;
        }


    }
}