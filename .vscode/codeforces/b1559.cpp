#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        string s;
        cin >> s;
        int rb = 1;
        int oe = 1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'R')
            {
                if (i % 2 == 0)
                {
                    oe = 0;
                }

                break;
            }
            if (s[i] == 'B')
            {
                rb = 0;
                if (i % 2 == 0)
                {
                    oe = 0;
                }
                break;
            }
        }
        if (oe == 1 && rb == 1)
        {

            int b = 1;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '?')
                {
                    if (b == 0)
                    {

                        s[i] = 'R';
                    }
                    if(b==1)
                    {
                        s[i] = 'B';
                        
                    }
                }

                if (s[i] == 'R')
                {
                    b = 1;
                }
                if (s[i] == 'B')
                {
                    b = 0;
                }
            }
        }
        else if (oe == 0 && rb == 1)
        {
           int b = 0;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '?')
                {
                    if (b == 0)
                    {

                        s[i] = 'R';
                    }
                    if(b==1)
                    {
                        s[i] = 'B';
                    }
                }

                if (s[i] == 'R')
                {
                    b = 1;
                }
                if (s[i] == 'B')
                {
                    b = 0;
                }
            }
        }
        if (oe == 1 && rb == 0)
        {
            int b = 0;
            for (int i = 0; i < n; i++)
            {
                  if (s[i] == '?')
                {
                    if (b == 1)
                    {

                        s[i] = 'B';
                    }
                    else
                    {
                        s[i] = 'R';
                    }
                }
                {

                    if (s[i] == 'R')
                    {
                        b = 1;
                    }
                    if (s[i] == 'B')
                    {
                        b = 0;
                    }
                }
              
            }
        }
        else if (oe == 0 && rb == 0)
        {
            int b = 1;
            for (int i = 0; i < n; i++)
            {
                 if (s[i] == '?')
                {
                    if (b == 0)
                    {

                        s[i] = 'R';
                    }
                    else
                    {
                        s[i] = 'B';
                    }
                }{

                    if (s[i] == 'R')
                    {
                        b = 1;
                    }
                    if (s[i] == 'B')
                    {
                        b = 0;
                    }
                }
               
            }
        }
        cout << s << endl;
    }
    return 0;
}