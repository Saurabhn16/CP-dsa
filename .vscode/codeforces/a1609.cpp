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
        long long omin = INT_MIN;
        long long b = 0;
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 != 0)
            {
                if (omin < a[i])
                {
                    omin = a[i];
                    b = 1;
                }
            }
        }
        sort(a, a + n);
        long long mx=*max_element(a,a+n);
        // if (b == 1)
        // {
        //     mx = omin;
        // }
        // else
        // {
        //     mx = *max_element(a, a + n);
        // }
        if(omin+2>mx)
        {
            mx=omin;
        }

        long long count = 0;
        long long sum = 0;
        long long k = 0;
        long long idx;
        for (long long i = 0; i < n; i++)
        {
            if (a[i] != mx || k == 1)
            {
                while (a[i] % 2 == 0)
                {
                    a[i] = a[i] / 2;
                    count++;
                }
            }
            else
            {
                k = 1;
                idx = i;
            }
        }

        for (long long i = 0; i < count; i++)
        {
            a[idx] = a[idx] * 2;
        }

        for (long long i = 0; i < n; i++)
        {

            sum += a[i];

            //  cout<<a[i]<<" ";
        }

        cout << sum;

        cout << endl;

        ;
    }
    return 0;
}