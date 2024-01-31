#include <bits/stdc++.h>
using namespace std;
#define int long long
void transform(vector<int> &input)
{
    // create an empty ordered map
    map<int, int> map;
 
    // store (element, index) pair in a map
    for (int i = 0; i < input.size(); i++) {
        map[input[i]] = i;
    }
 
    // keys are stored in sorted order in an ordered map
 
    // rank starts from 1
    int rank = 1;
 
    // iterate through the map and replace each element with its rank
    for (auto i: map) {
        input[i.second] = rank++;        // `i.second` stores the index of element `i`
    }
}

signed main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        int a[n];
        int b[n];
        map<int, int> m;
        int c[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }

        sort(b, b + n);
        int sum = 0;

        for (int i = 0; i < n; i++)
        {

        }
        cout << endl;
        for (int i = 0; i < n; i++)
        {
            cout << c[i] << " ";
        }
        cout << endl;
        int ct = 0;
        int xy = 1;

        for (int i = 0; i < n; i++)
        {

            if (ct % 2 == 0)
            {
                m.insert({c[n - 1 - i], xy});
            }
            if (ct % 2 != 0)
            {
                
                    m.insert({c[n - 1 - i], -xy});
                    xy++;
                
            }

            ct++;
        }
        cout << 0 << " ";
        for (int i = 0; i < n; i++)
        {
            cout << m.at(c[i]) << " ";
        }
        cout << endl;
    }
    return 0;
}
