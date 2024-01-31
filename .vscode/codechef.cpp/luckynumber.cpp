#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        string ao;
        cin >> ao;
        int p = 0;
        for (int i = 0; i < ao.size(); i++)
        {
            if (ao[i] == '7')
            {
                p = 1;
            }
        }
        if (p == 1)
        {
            cout << "YES" << endl;
        }

        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}