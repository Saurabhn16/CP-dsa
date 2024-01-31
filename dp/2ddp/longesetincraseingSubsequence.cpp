#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
   int longestSubsequence(int n, int a[])
    {
        vector<int> dp;
        
        for (int i = 0; i < n; i++)
        {
            auto it = lower_bound(dp.begin(), dp.end(), a[i]);
            if (it == dp.end())
                dp.push_back(a[i]);
            else
                *it = a[i];
        }
        
        return dp.size();
    }
};

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution ob;
        cout << ob.longestSubsequence(n, a) << endl;
    }
    return 0;
}



class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
   int solveTab(int n, int a[]) {
        vector<vector<int>> dp(n+1, vector<int>(n + 1, 0));

        for (int curr = n - 1; curr >= 0; curr--) {
            for (int prev = curr - 1; prev >= -1; prev--) {
                int take = 0;
                if (prev == -1 || a[curr] > a[prev]) {
                    take = 1 + dp[curr + 1][curr+1];
                }

                int nottake = dp[curr + 1][prev + 1];
                dp[curr][prev + 1] = max(take, nottake);
            }
        }

        return dp[0][0];
    }

    int longestSubsequence(int n, int a[]) {
        return solveTab(n, a);
    }
};