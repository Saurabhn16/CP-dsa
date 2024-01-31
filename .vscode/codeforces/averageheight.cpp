#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<int> b;
        vector<int> c;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            if (k % 2 == 0)
            {
                b.push_back(k);
            }

            else
            {
                c.push_back(k);
            }
        }

       
        for (int i = 0; i < c.size(); i++)
        {
            cout << c[i] << " ";
        }
 for (int i = 0; i < b.size(); i++)
        {
            cout << b[i] << " ";
        }
        cout << endl;
    }
    return 0;
}