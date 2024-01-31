#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long  a, b, c;
        cin >> a >> b >> c;
        int binaryNum[32];
        int t = 0;
        int i = 0;
        while (c > 0)
        {

            binaryNum[i] = c % b;
        if(binaryNum[i]>1){t++;}
            c = c / b;
            i++;
        }
        if (t > 0)
        {
            cout << "-2" << endl;
        }
        else
        {
            for (int j = 0; j < i; ++j)
                cout << binaryNum[j] << " ";
        }
        cout << endl;
    }
}