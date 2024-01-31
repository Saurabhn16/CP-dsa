

#include <bits/stdc++.h>
using namespace std;
int f(vector<int> heights, int n)
{
    n = heights.size();
    vector<int> dp(n, -1);

    dp[0] = 0;

    for (int i = 1; i < n; i++)
    {
        int c = dp[i - 1] + abs(heights[i] - heights[i - 1]);
        int b = 100000000;
        if (i >= 2)
        {
            b = dp[i - 2] + abs(heights[i] - heights[i - 2]);
        }
        dp[i] = min(b, c);
    }

    return dp[n - 1];
}

int main()
{
    // int t;
    // cin >> t;
    // while (t--)
    {

        int n;
        cin >> n;
        vector<int> heights;
        for (int i = 0; i < n; i++)
        {
           int k;
            cin >>k;
            heights.push_back(k);
             
        }

        int l = f(heights, n);
        cout << l << endl;
    }
    return 0;
}