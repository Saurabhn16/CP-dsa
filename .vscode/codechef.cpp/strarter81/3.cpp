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

        // long long a[n][n];
        if (n == 2)
        {
            cout << "-1" << endl;
        }
        else
        {
            // if (n % 2 == 0)
            // {
            //     for (int i = 0; i < n; i++)
            //     {
            //         int ct = n - i - 1;
            //         // cout<<i<<" "<<ct<<endl;

            //         if (i % 2 == 0)
            //         {
            //             for (int j = 0; j < ct; j++)
            //             {
            //                 cout << 0;
            //             }
            //             for (int j = ct; j < n; j++)
            //             {
            //                 cout << 1;
            //             }
            //             cout << endl;
            //         }
            //         if (i % 2 != 0)

            //         {
            //             for (int j = 0; j <= i; j++)
            //             {
            //                 cout << 1;
            //             }

            //             for (int j = 1 + i; j < n; j++)
            //             {
            //                 cout << 0;
            //             }
            //             cout << endl;
            //         }
            //     }
            // }
            // else
            {
                for (int i = 0; i < n  ; i++)
                {
                    if (i <n-1)
                    {
                        /* code */

                        for (int j = 0; j < n; j++)
                        {
                            if (j == i)
                            {
                                cout << 1;
                            }
                            else
                            {
                                cout << 0;
                            }
                        }
                    }

                    if(i==n-1)
                    {
                        
                        for (int j = 1; j < n; j++)
                        {
                            cout << 1;
                        }
                        cout << 0;
                    }
                    cout << endl;
                }
            }
        }
    }
    return 0;
}