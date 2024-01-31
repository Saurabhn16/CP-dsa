#include <bits/stdc++.h>
using namespace std;
#define int long long
int next2pown(int n)
{
    int bits_cnt = 0;
    int cases = 1LL << bits_cnt;
    while (cases <= n)
    {
        bits_cnt++;
        cases = 1LL << bits_cnt;
        cout << cases << " ";
    }
    return cases;
}
signed main()
{

    long long n, m;
    cin >> n >> m;
    int cases = next2pown(n);
    cout << endl;
    if (m == 1)
    {
        cout << n << endl;
    }
    else
    {
        cout << cases - 1 << endl;
    }

    return 0;
}