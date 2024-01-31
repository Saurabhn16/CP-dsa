#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e7 + 1;
vector<bool> isPrime(N, 1);
vector<int> lp(N, 0), hp(N, 0) ;
signed main()
{
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i < N; i++)
    {
        if (isPrime[i] == true)
        {  lp[i]=hp[i]=i;
            for (int j = 2 * i; j < N; j += i)
            {
                isPrime[j] = false;
                hp[j] = i;
                if (lp[j] == 0)
                {
                    lp[j] = i;
                }
            }
        }
    }
for (int  i = 1; i < 100; i++)
{
    cout<<lp[i]<<" "<<hp[i]<<endl;
}


    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;
        if (isPrime[n])
        {
            cout << "Prime" << endl;
        }
        else
        {
            cout << "Non Prime" << endl;
        };
    }

    return 0;
}