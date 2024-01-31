#include <bits/stdc++.h>
using namespace std;
#define int long long
bool sign(int i)
{
    if (i > 0)
    {
        return true;
    }
    else
    {
        return false;
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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int x = 0;
        int y = 0;
        int sum = 0;
        int mx = 0;

        for (int i = 0; i < n; i++)
        {
            vector<int> m;

            if (a[i] > 0)
            {
                int j = i;
                while (a[j] > 0 && (j < n))
                {
                    m.push_back(a[j]);
                    j++;
                }
                i = j -1;
                for (int i = 0; i < m.size(); i++)
                {
                    // cout << m[i] << " ";
               
                }
                sum+=*max_element(m.begin(),m.end());
                // cout << endl;
             
            }
            vector<int> no;
            if (a[i] < 0)
            {
                int j = i;
                while (a[j] < 0 && (j < n))
                {
                    no.push_back(a[j]);
                    j++;
                }
                i = j -1;
                for (int i = 0; i < no.size(); i++)
                {
                    // cout << no[i] << " ";
                }
                   sum+=*max_element(no.begin(),no.end());
                // cout << endl;
            }
        }
     cout << sum << endl;
        // cout << endl;
    }
    return 0;
}