#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{

    if (a.first != b.first)
    {
        if (a.first > b.first)
            return true;
        return false;
    }
    else
    {
        if (a.second < b.second)
            return true;
        return false;
    }

    if (a > b)
        return true;
    return false;
}

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i].first >> a[i].second;

        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = i + 1; j < n; j++)
        //     {
        //         if (should_i_swap(a[i], a[j]))
        //             swap(a[i], a[j]);
        //     }
        // }
        sort(a.begin(),a.end(),cmp);
    
        for (int i = 0; i < n; i++)
        {
            cout << a[i].first << " " << a[i].second << endl;
        }
        cout << endl;
    }
    return 0;
}