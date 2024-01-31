#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    string b;
    int sum = 0;
    int ct = 0;
 
    for (int i = 1; i < 8; i++)
    {
        cin >> a;
        // for (int i = 0; i < 8; i++)
        // {

        //     if (a[i] == 'B' && ct== 0)
        //     {
        //         sum++;
        //         ct=ct+1;
        //     }
        // }

        if (a[0] == 'B'&&a[7] == 'B')
        {
            sum++;
        }
    }
     for (int i = 0; i < 1; i++)
    {
        cin >> b;
        for (int i = 0; i < 8; i++)
        {
            if (b[i] == 'B'&&a[i] == 'B')
            {
                sum++;
            }
        }
    }

    if (sum==15)
    {
        sum=8;
    }
    

    cout << sum;

    return 0;
}