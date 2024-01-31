#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<pair<int, int>> movements = {
    {0, 1}, {0, -1}, {1, 0}, {-1, 0}, {1, 1}, {-1, -1}, {-1, 1}, {1, -1}};

bool isValid(int i, int j, const map<pair<int, int>, int>& val)
{
    return i >= 0 && j >= 0 && val.count({i, j}) && val.at({i, j}) == 1;
}

int bfs(int x, int y, int x1, int y1, const map<pair<int, int>, int>& val)
{
    queue<pair<int, int>> q;
    q.push({x, y});
    map<pair<int, int>, bool> vis;
    map<pair<int, int>, int> lev;
    lev[{x, y}] = 0;
    vis[{x, y}] = true;

    int ans = 0;
    while (!q.empty())
    {
        auto v = q.front();
        int v_x = v.first;
        int v_y = v.second;
        q.pop();

        for (auto movement : movements)
        {
            int child_x = movement.first + v_x;
            int child_y = movement.second + v_y;

            if (!isValid(child_x, child_y, val))
                continue;

            if (vis[{child_x, child_y}])
                continue;

            q.push({child_x, child_y});
            lev[{child_x, child_y}] = lev[{v_x, v_y}] + 1;
            vis[{child_x, child_y}] = true;
            ans = max(ans, lev[{child_x, child_y}]);

            if (child_x == x1 && child_y == y1)
                return ans;
        }
    }

    return -1;
}

signed main()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int t;
    cin >> t;
    map<pair<int, int>, int> val;
    while (t--)
    {
        int r, a, b;
        cin >> r >> a >> b;
        for (int j = a; j <= b; j++)
        {
            val[{r, j}] = 1;
        }
    }

    if (x1 == x2 && y1 == y2)
    {
        cout << 0 << endl;
    }
    else
    {
        int ans = bfs(x1, y1, x2, y2, val);
        cout << ans << endl;
    }

    return 0;
}
