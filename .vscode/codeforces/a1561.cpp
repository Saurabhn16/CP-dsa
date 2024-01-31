#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long a[n];
        long long b[n];
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b, b + n);
        // for (int i = 0; i < n; i++)
        // {
        //     cout << b[i] << " ";
        // }

        int ct = 1;
        int p;
        for (int i = 0; i < n; i++)
        {
            p = 1;
            for (int i = 0; i < n; i++)
            {
                if (a[i] != b[i])
                {
                    p = 0;
                }
            }
            {
                if (p == 0)
                {

                    for (int i = 0; i < n - 1; i++)
                    {
                        if (i % 2 == 0)
                        {
                            if (a[i] > a[i + 1])
                            {
                                swap(a[i], a[i + 1]);
                                i++;
                            }
                        }
                    }
                    ct+=1;
                    p=1;
                    for (int i = 0; i < n; i++)
                    {
                        if (a[i] != b[i])
                        {
                            p = 0;
                        }
                    }
                    if (p==1)
                    {
                        break;
                    }
                    
                    // for (int i = 0; i < n; i++)
                    // {
                    //     cout << a[i] << " ";
                    // }
                    // cout << endl;
                    for (int i = 0; i < n - 1; i++)
                    {
                        if (i % 2 != 0)
                        {
                            if (a[i] > a[i + 1])
                            {
                                swap(a[i], a[i + 1]);
                                i++;
                            }
                        }
                    }
                    ct += 1;
                    // for (int i = 0; i < n; i++)
                    // {
                    //     cout << a[i] << " ";
                    // }
                    // cout << endl;
                }
                else
                {
                    p = 1;
                    break;
                }
            }
        }
        if (ct - 1 < 0)
        {
            cout << "0" << endl;
        }
        else
        {
            cout << ct - 1 << endl;
        }
        // cout << endl;
    }
    return 0;
}c