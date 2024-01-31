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
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
     long long max = *max_element(a, a + n);
      long long min  = *min_element(a, a + n);

        long long bt = a[0];

        for (long long i = 1; i < n; i++)
        {
            if (bt > 0)
            {

                bt = bt | a[i];
            }
        }
          int  p = 0;
        for (int i = 0; i < 20; i++)

        {
            long long q = pow(2, i)-1;
    
            if (bt == q)
            {
                p = 1;
            }
        }

        if (p == 1&&min!=0)
        {
            cout << "YES" << endl;
        }

        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}