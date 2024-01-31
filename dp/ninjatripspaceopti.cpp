#include <bits/stdc++.h>

int minimumCoins(int n, vector<int> days, vector<int> cost)
{
    int ans = 0;
    queue<pair<int, int>> month;
    queue<pair<int, int>> week;
    for (auto day : days)
    {
        // step1:remove expired days
        while (!month.empty() && month.front().first + 30 <= day)
        {
            month.pop();
        }
        while (!week.empty() && week.front().first + 7<= day)
        {
            week.pop();
        }

        // step2 : add cost for current day
        week.push(make_pair(day, ans + cost[1]));
        month.push(make_pair(day, ans + cost[2]));
        // step3 ans
        ans = min({week.front().second, month.front().second,ans+cost[0]});
    }
    return ans;
}