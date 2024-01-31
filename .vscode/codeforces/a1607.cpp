#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s, b;
        cin >> s >> b;
        int sum = 0;
        int a[b.size()];
        

        for (int j = 0; j < b.size(); j++)
        {
            for (int i = 0; i < s.size(); i++)
            { 
                if (b[j] == s[i])
                {
                    a[j] = i;
                }
            }
        }
        for (int i = 0; i < b.size() - 1; i++)
        {
         sum+=max(a[i]-a[i+1],a[i+1]-a[i]);
        }

        cout << sum << endl;
    }

    return 0;
}
