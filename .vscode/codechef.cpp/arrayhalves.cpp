#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int s;
        cin >> s;
        string str;
        cin >> str
        str;
        int count = 0;
        for (auto i : str)
        {
            if (i == '1')
            {
                count++;
                
                }
            }
            if (str == "1" || str == "10")
            {
                cout << "NO" << endl;
            }
            else if (count <= 3)
            {
                cout << "YES " << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        return 0;
    }
