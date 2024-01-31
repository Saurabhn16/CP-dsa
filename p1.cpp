// saurabh_1610
#include <bits/stdc++.h>
using namespace std;
#define int long long
void ans(int v)
{
    if (v)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}
string intToBinary(long long num)
{
    string binary;

    if (num == 0)
    {
        return "0";
    }

    while (num > 0)
    {
        int rem = num % 2;
        binary = to_string(rem) + binary;
        num /= 2;
    }

    return binary;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, r;
        cin >> n >> m >> r;
        // cout << intToBinary(n) << " " << intToBinary(m) << " " << intToBinary(r) << " " << endl;
        int lg = log2(r) + 1;
 
        if (n < m)
        {
            swap(n, m);
        }

        int sum = 0;
        for (int i = 62; i >= 0; i--)
        {

            if ((n & (1 << i)) != (m & (1 << i)))
            {
                if ((n&(1<<i))&&((1<<i)+sum)<r)
                {
                    sum += (1 << i);
                }
                else
                {
                    sum -= (1 << i);
                }
            
            }
        }

        cout << abs(sum) << " " << abs(n - m) << endl;
    }
    

return 0;
}