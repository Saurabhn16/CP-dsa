#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        if (k == 0)
        {
            cout << "YES" << endl;
            /* code */
        }
        else
        {
            int bol = 1;
            string o, p;
            for (float i = 0; i < n; i++)
            {
                float k = n / 2;
                if (i < n / 2)
                {
                    o.push_back(s[i]);
                }
                else if (i >= n / 2)
                {
                    p.push_back(s[i]);
                }
            }

            if ((s.size() % 2 != 0))
            {
                if (s.size() / 2 >=k)
                {
                    int bo = 1;
                    for (int i = 0; i < k; i++)
                    {
                        //  cout << o[i] << " " << p[p.size()-1-i] << endl;
                        if (o[i] != p[p.size() - 1 - i])
                        {
                            bo = 0;
                        }
                    }
                    {
                        if (bo == 1)
                            cout << "Yes";
                        else
                            cout << "NO";
                    }
                }
                else
                {
                    cout << "NO";
                }
            }
            if ((s.size() % 2 == 0))
            {
                if (s.size() / 2>k)
                {
                    int bo = 1;
                    for (int i = 0; i < k; i++)
                    {
                        //  cout << o[i] << " " << p[p.size()-1-i] << endl;
                        if (o[i] != p[p.size() - 1 - i])
                        {
                            bo = 0;
                        }
                    }
                    {
                        if (bo == 1)
                            cout << "Yes";
                        else
                            cout << "NO";
                    }
                }
                else
                {
                    cout << "NO";
                }
            }

            cout << endl;
        }
    }
    return 0;
}