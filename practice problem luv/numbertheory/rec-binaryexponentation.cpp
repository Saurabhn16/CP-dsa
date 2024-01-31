#include <bits/stdc++.h>
using namespace std;
#define int long long

int binExpRecur(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    long long res = binExpRecur(a, b / 2);
    if (b & 1)
    {
        return (a * res * res);
    }
    else
    {
        return (res * res);
    }
}
int binExpIter(int a, int b)
{
    int ans = 1;
    while (b)
    {
        if (b & 1)
        {
            ans = ans * a;
        }
        a = a * a;
        b >>a = 1;
    }
    return ans;
}
signed main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, m;
        cin >> n >> m;
        cout << binExpRecur(n, m) << endl; 
         cout << binExpIter(n, m) << endl;
    }
    return 0;
}