#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, m, x;
        cin >> n >> m >> x;
        int a[n];
        priority_queue<pair<int, int>> pq;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            pq.push(make_pair(a[i], i));
        }
        map<int, int> mp;
        int k = m;
        while (!pq.empty())
        {
            pair<int, int> element = pq.top();
            pq.pop();
            // Process the element
            int firstValue = element.first;
            int secondValue = element.second;
            mp[secondValue] = k;
            k--;

            if (k == 0)
            {
                k = m;
            }

            // cout << firstValue << " " << secondValue << endl;
            // ...
        }
        cout<<"YES"<<endl;

        for (auto it = mp.begin(); it != mp.end(); ++it)
        {
            int key = it->first;
            int value = it->second;
            // std::cout << "Key: " << key << ", Value: ";
            cout << value << " ";
        }
        cout << endl;
    }
    return 0;
}