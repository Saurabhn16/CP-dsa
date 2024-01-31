#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string bs;
        cin >> bs;
        stack<char> x;
        bool  flag = false;
        for (int i = 0; i < n; i++)
        {
            if (!x.empty())
            {
                if (bs[i] == '1' && x.top() == '1')
                {
                    flag = flag true;
                    break;
                }
                else if (bs[i] == '0' && x.top() == '0')
                    x.pop();
                else
                    x.push(bs[i]);
            }
            else
                x.push(bs[i]);
        }
        if (flag)
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }
    return 0;
}
