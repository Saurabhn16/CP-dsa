#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool bfs(vector<vector<int>> &graph, vector<int> &col, int first)
{
    // cout<<first<<"\n";
    queue<int> val;
    val.push(first);
    col[first] = 0;
    while (!val.empty())
    {
        int f = val.front();
        val.pop();
        int sam = col[f];
        // cout<<f<<" "<<sam<<"\n";
        for (int i = 0; i < graph[f].size(); i++)
        {
            // cout<<graph[f][i]<<" "<<col[graph[f][i]]<<" k ";
            if (col[graph[f][i]] == -1)
            {
                col[graph[f][i]] = sam ^ 1;
                val.push(graph[f][i]);
            }
            else if (col[graph[f][i]] != sam ^ 1)
            {
                return false;
            }
        }
        // cout<<" jump \n";
    }

    for (auto y : col)
    {
        cout << y << " ";
    }
    cout << "\n";
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int e;
    cin >> e;
    vector<vector<int>> graph(n + 1, vector<int>());
    int first;
    for (int i = 0; i < e; i++)
    {
        int p, k;
        cin >> p >> k;
        graph[p].push_back(k);
        graph[k].push_back(p);
        first = p;
    }

    vector<int> color(n + 1, -1);

    cout << bfs(graph, color, first);

    return 0;
}
