#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string, int> m;
    int n;
    int count = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        m[s]++;
        for (auto pr : m)
        {
            cout << pr.first << " " << pr.second << endl;
            if (pr.second == 2)
            {
                count++;
            }
        }
    }
    cout << " count=" << count << endl;
}