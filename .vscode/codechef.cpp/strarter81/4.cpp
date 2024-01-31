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

   ]
        if (n == 2)
        {
            cout << "-1" << endl;
        }
        else
        {

            for (int i = 0; i < n; i++)
            {  int ct =n-i-1;
            // cout<<i<<" "<<ct<<endl;
        
                if (i % 2 == 0)
                {       
                    for (int j = 0; j <=ct; j++)
                    {
                        a[i][j] = 1;
                    }
                    for (int j = ct+1; j < n; j++)
                    {
                        a[i][j] = 0;
                    }
                }
                else
                {

                    for (int j = i; j <=n; j++)
                    {
                        a[i][j] = 1;
                    }
                    for (int j = 0; j < i; j++)
                    {
                        a[i][j] = 0;
                    }
                }
            }
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cout << a[i][j];
                }
                cout << endl;
            }
        }
    }
    return 0;
}