#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a[4];

        cin >> a[0] >> a[1] >> a[2] >> a[3];
        // cout<<a[0]<<a[1]<<a[2]<<a[3];
        if (a[0] != 0)
        {
            long long temp = a[0];
            a[0] = 0;
            long long max = *max_element(a, a + 4);
            a[0]=INTMAX_MAX;
            long long min = *min_element(a, a + 4);
            a[0]=0;
                  long long mn = max;
                        for (int i = 0; i < 4; i++)
                        {
                            if (a[i] < mn && (a[i] != 0))
                            {
                                mn = a[i];
                            }
                        }

            sort(a, a + 4);
            long long sum1 = 0;
            for (int i = 0; i < 4; i++)
            {
                sum1 += a[i];
            }
            if (temp >= sum1)
            {
                cout << temp + sum1 << endl;
            }

            else
            {
                long long sum = 0;
                int k = 0;
                if ((a[1] != 0 && a[2] != 0) || (a[1] != 0 && a[3] != 0) || (a[2] != 0 && a[3] != 0))
                {
                    k = 1;
                }

                if (temp > max)
                {
                    sum = temp + max;
                }
                if (temp == max)
                {
                    sum = temp + max + k;
                }
                if (temp < max)
                {
                    if (temp != 1)
                    { 
                        sum = 2 * temp + 2 * mn + 1;
                    }
                    if (temp == 1)
                    {   
                        sum = 2*temp + mn+k;
                    }
                    cout << sum << endl;
                }
            }
        }
        else
        {
            cout << "1" << endl;
        }
    }
    return 0;
}