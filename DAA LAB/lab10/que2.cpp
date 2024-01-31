#include <iostream>
#include <vector>
using namespace std;

int MxPnt(int n, vector<int> &p, vector<int> &f)
{
    vector<int> Dp(n + 1);
    Dp[0] = 0;
    for (int i = 1; i <= n; i++)
    {

        Dp[i] = max(p[i - 1] + (i - f[i - 1] >= 1 ? Dp[i - f[i - 1] - 1] : 0), Dp[i - 1]);
    }
    return Dp[n];
}

int main()
{
    int n;
    cin >> n;
    vector<int> p;
    vector<int> f;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        p.push_back(k);
    }
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        f.push_back(k);
    }

    int result = MxPnt(n, p, f);
    cout << "Maximum points: " << result << endl;
    return 0;
}
