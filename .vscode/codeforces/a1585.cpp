#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            
        }
        
        int sum = 1;
        int p = 1;
        if (n == 1)
        {
            if (a[0] == 0)
            {
                p = 1;
            }
            if (a[0] == 1)
            {
                sum = 2;
            }
        }
        else
        {
            int ct = 0;
            for (int i = 0; i <= n-1; i++)
            { 
                if ((a[i + 1] == 0) && (a[i] == 0)&&(i+1!=n))
                {
                    p = 0;
                    break;
                }
                if (a[i] == 1)
                {
                    ct++;
                }
                if (a[i] == 0)
                {
                    ct = 0;
                }
                if (ct == 1)
                {
                    sum = sum + 1;
                }
                if (ct > 1)
                {
                    sum = sum + 5;
                }
            }
        }

        if (p == 0)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << sum << endl;
        }
    }

    return 0;
}
