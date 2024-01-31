#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, cnt = 0;
    cin >> n;
    string str;
    cin >> str;
    unordered_map<char, int> mps;
    for (int j = 0; j < 2 * (n - 1); j = j + 2)
    {
        mps[str[j]]++;
        auto it = mps.find('a' + (str[j + 1] - 'A'));
        if (it != mps.end())
        {
            if (mps['a' + (str[j + 1] - 'A')] > 1)
            {
                mps['a' + (str[j + 1] - 'A')]--;
            }
            else
            {
                mps.erase('a' + (str[j + 1] - 'A'));
            }
        }
        else
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}