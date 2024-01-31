#include <bits/stdc++.h>
using namespace std;
#define int long long

bool isPresent(const std::set<int> &mySet, int k)
{
    return mySet.find(k) != mySet.end();
}

signed main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        int a[n];
        set<int> sp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sp.insert(a[i]);
        }
        sort(a, a + n);
        int mx = a[n - 1];
        int s = -1;
        int to;
        int z = log2(mx) + 2;
        //  int no=1<<z;
        for (int i = 1; i <= 1024; i++)
        {
            // cout<<i<<endl;
            int to = 0;

            //  cout<<no;
            for (int j = 0; j <= n; j++)
            {

                int f = a[j] ^ i;
                // cout<<f<<endl;
                if (isPresent(sp, f))
                {
                    to++;
                    // cout<<"to"<<to<<endl;
                    // cout << a[j] << " -" << f << std::endl;
                }
                else
                {
                    break;
                }
                if (to == n)
                {
                    s = i;
                }
                if (s != -1)
                {
                    break;
                }
            }
        }
        cout << s << endl;
        // cout << endl;
        ;
    }
    return 0;
}