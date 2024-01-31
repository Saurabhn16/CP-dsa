#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    { vector<int>A;
    A.push_back
        long long n;
        cin >> n;
        if (n % 2 == 0)
        {
            cout << n - 3 << " " << 2 << " " << 1 << endl;
        }
        else
        {
            if (n / 2 % 2 != 0)
            {
                cout << (n) / 2 + 2 << " " << (n) / 2 - 2 << " 1" << endl;
            }
            else
            {
                cout << (n) / 2 + 1 << " " << (n) / 2 - 1<< " 1" << endl;
            }
        }
    }
    return 0;
}