#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int l = s.size();
        int a1 = 0;
        int b1 = 0;
        for (int i = 0; i < l; i++)
        {
            if (s[i] == 'a' && s[i + 1] == 'b')
            {
                a1++;
            }
            if (s[i] == 'b' && s[i + 1] == 'a')
            {

                b1++;
            }
        }
        if (a1 == b1)
        {
            cout << s << endl;
        }
        else
        {
            if (s[0] == 'a')
            {
                int c = 1;
                int d = 1;
                for (int i = 0; i < l; i++)
                {
                    if (s[i] == s[i + 1])
                    {
                        c++;
                    }
                    else
                    {
                        break;
                    }
                }
                for (int i = l - 1; i >= 0; i--)
                {
                    if (s[i] == s[i - 1])
                    {
                        d++;
                    }
                    else
                    {
                        break;
                    }
                }
                //  cout<<c<<d<<"cd"<<" ";
                if (d > c)
                {

                    if (c != 0)
                    {
                        s[0] = 'b';
                    }
                }
                else
                {

                    if (d != 0)
                    {
                        // cout << 1 << " ";
                        s[l - 1] = 'a';
                    }
                }

                cout << s << endl;
            }
            else
            {
              
              int c = 1;
                int d = 1;
                for (int i = 0; i < l; i++)
                {
                    if (s[i] == s[i + 1])
                    {
                        c++;
                    }
                    else
                    {
                        break;
                    }
                }
                for (int i = l - 1; i >= 0; i--)
                {
                    if (s[i] == s[i - 1])
                    {
                        d++;
                    }
                    else
                    {
                        break;
                    }
                }
                // cout<<c<<d<<"cd"<<" ";
                if (d > c)
                {

                    if (c != 0)
                    {
                        s[0] ='a';
                    }
                }
                else
                {

                    if (d != 0)
                    {
                        // cout << 1 << " ";
                        s[l - 1] = 'b';
                    }
                }
cout<<s<<endl;
            }
        }
    }
    return 0;
}