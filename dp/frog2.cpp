#include <bits/stdc++.h>
 using namespace std;
#define int long long 
int  f(vector<int> heights, int n, int k)
{
    n = heights.size();
    vector<int> dp(n, -1);

    dp[0] = 0;

    for (int i = 1; i <n; i++)
    {
        int b = 999999999;

        for (int j = 1; j <= k; j++)
        {
              if ((i-j) >=0)
            {
            int c = dp[i - j] + abs(heights[i] - heights[i - j]);
           
                b = min(c, b);
            }
        }

        dp[i] = b;
    }

    return dp[n - 1];
}

signed main()
{
    
    {

        int n, k;
        cin >> n >> k;
        vector<int> heights;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            heights.push_back(k);
        }

        long long  l = f(heights, n, k);
        cout << l << endl;
    }
    return 0;
}