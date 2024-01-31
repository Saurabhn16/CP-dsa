#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int a;
    int b;

    int count;
    for (int a = 1; a < t && a < b; a++)
    { cout <<a<<endl;
        count = 0;
        int m = (a + b) * 2;
        if (m == t)
        {
            count++;
            cout << count;
        }
    }

    return 0;
}
