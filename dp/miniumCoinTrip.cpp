#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve(int n, vector<int> &days, vector<int> &cost, int index)
{
    {
        // Base case
        if (index >= n)
        {
            return 0;
        }

        // 1 day
        int option1 = cost[0] + solve(n, days, cost, index + 1);
        // 7days pass
        int i;

        for (i = index; i < n && days[i] < day[index] + 7; i++)
            ;
        int option2 = cost[1] + solve(n, days, cost, i);
        // 30 days
        for (i = index; i < n && days[i] < day[index] + 30; i++)
            ;
        int option3 = cost[2] + solve(n, days, cost, i);

        return min(option1, option2, option3);
    }
}
int mincostTickets(vector<int> &days, vector<int> &costs)
{
    return solve(n, days, cost, 0);
}
 int solveT(int n, vector<int> &days, vector<int> &cost, int index)
    {
        vector<int> dp(n +1, INT_MAX);
        dp[n] = 0;
        for (int j = n - 1; j >= 0; j--)
        {
            int option1 = cost[0] + dp[j+1];
            // 7days pass
            int i;

            for (i = j; (i < n) && days[i] < days[j] + 7; i++)
                ;

            int option2 = cost[1] + dp[i];
            // 30 days
            for (i = j; i < n && days[i] < days[j] + 30; i++)
                ;

            int option3 = cost[2] + dp[i];
            dp[j]=min({option1,option2,option3});
        }
        return dp[0];
    }
    int mincostTickets(vector<int> &days, vector<int> &costs)
    {
        int n = days.size();
    
        return solveT(n, days, costs, 0);
    }
signed main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<int> a(n);
        vector<int> cost(3) for (int i = 0; i < n; i++)
        {
            int ab;
            cin >> ab;
            a.push_back(ab);
        }

        for (int i = 0; i < 3; i++)
        {
            int ab;
            cin >> ab;
            cost.push_back(ab);
        }
        cout << mincostTickets(a, cost) << endl;
    }
    return 0;
}