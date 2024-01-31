#include <bits/stdc++.h>
using namespace std;

struct sech
{
    int pro;
    int deadline;
    int id;
};
bool static cmp(sech a, sech b)
{
    return (a.pro > b.pro);
}

int main()
{
    int n;
    cin >> n;
    vector<int> p(n);
    vector<int> d(n);
    sech ans[n];
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> d[i];
    }
    for (int i = 0; i < n; i++)
    {
        ans[i].pro = p[i];
        ans[i].deadline = d[i];
        ans[i].id = i;
    }
    sort(ans, ans + n, cmp);
    int maxi = ans[0].deadline;
    for (int i = 1; i < n; i++)
    {
        maxi = max(maxi, ans[i].deadline);
    }

    int slot[maxi + 1];

    for (int i = 0; i <= maxi; i++)
        slot[i] = -1;

    int count = 0, totalProfit = 0;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        for (int j = ans[i].deadline; j > 0; j--)
        {
            if (slot[j] == -1)
            {
                totalProfit += ans[i].pro;
                v.push_back(ans[i].id);
                slot[j] = i;
                count++;
                break;
            }
        }
    }
    cout << count << " " << totalProfit << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] + 1 << " ";
    }
    return 0;
}

//Time complexity-- O(n*maxi+nlogn)