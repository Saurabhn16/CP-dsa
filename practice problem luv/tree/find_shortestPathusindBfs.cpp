#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 8;
vector<int> g[N];
int lev[N][N];
int vis[N][N];

int getX(string s)
{
    return s[0] - 'a';
}

int getY(string s)
{
    return s[1] - '1';
}

bool isValid(int x, int y)
{
    return (x >= 0 && x < N && y >= 0 && y < N);
}

void reset()
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            lev[i][j] = 0;
            vis[i][j] = 0;
        }
    }
}

vector<pair<int, int>> movements = {
    {-1, 2}, {-1, -2}, {1, 2}, {1, -2}, {2, 1}, {-2, 1}, {-2, -1}, {2, -1}};

int bfs(string source, string dest)
{
    int sourceX = getX(source);
    int sourceY = getY(source);
    int destX = getX(dest);
    int destY = getY(dest);

    queue<pair<int, int>> q;
    q.push({sourceX, sourceY});
    vis[sourceX][sourceY] = 1;

    while (!q.empty())
    {
        pair<int, int> v = q.front();
        q.pop();

        int x = v.first;
        int y = v.second;

        for (auto movement : movements)
        {
            int childX = movement.first + x;
            int childY = movement.second + y;

            if (!isValid(childX, childY))
            {
                continue;
            }

            if (!vis[childX][childY])
            {
                q.push({childX, childY});
                lev[childX][childY] = lev[x][y] + 1;
                vis[childX][childY] = 1;
            }
        }

        if (lev[destX][destY] != 0)
        {
            break;
        }
    }

    return lev[destX][destY];
}

signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        reset();

        string source, dest;
        cin >> source >> dest;

        int moves = bfs(source, dest);
        cout << moves << endl;
    }

    return 0;
}
