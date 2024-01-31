#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ct = 0;
    // your code goes here
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    int amt;
    cin >> amt;
    for (int k = 0; k < 15; k++)
    {

        sort(v.begin(), v.end());

        reverse(v.begin(), v.end());
        int i = 0;
        int ttlcoin = 0;
        if (amt == 0)
        {
            cout << "0" << endl;
            return 0;
        }
        while (amt > 0)
        {
            if (amt < v[i])
            {
                if (i == n - 1)
                {
                    break;
                }
                i++;
                continue;
            }
            if (amt >= v[i])
            {
                amt -= v[i];
                ttlcoin++;
            }
        }
        if (ttlcoin >= 1)
        {
            ct++;
        }

        if (amt == 0)
        {
            cout << ttlcoin << endl;
            return 0;
        }
    }
    cout << "-1" << endl;

    return 0;
}