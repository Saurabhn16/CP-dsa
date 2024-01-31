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
        int a[n];
        int b[n/2];
        int k=0;
        int l=0;
        int c[n/2];
        for (int i = 0; i < n / 2; i++)
        {
            b[i] = 2 * i+ 1;
        }
        for (int i = 0; i < n / 2; i++)
        {
            c[i] = 2 * (i+1);
        }

        if (n % 2 == 0)
        {
            for (int i = 0; i < n; i++)
            {
                if (i % 2 != 0)
                {
                    a[i] = b[k];
                    k++;
                }
                else
                {
                    a[i] =c[ l];
                    l++;
                }
                cout << a[i] << " ";
            }

            cout << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}