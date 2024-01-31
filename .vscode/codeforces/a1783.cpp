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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int max;

        int k = *max_element(a, a + n);
        // cout<<k<<" ";
        for (int i = 0; i < n; i++)
        {
            if (a[i] == k)
            {
                max = i;
            }
        }

        swap(a[max], a[0]);
        sort(a + 1, a + n);
        int sum = a[0];
        int p = 1;
        // for (int i = 0; i < n; i++)
        //     {
        //         cout << a[i] << " ";
        //     }
        for (int i = 1; i <= n-1; i++)
        {
            if (a[i] == sum)
            {
                p = 0;
                break;
            }
            sum = sum + a[i];
        }
        if (p == 1)
        {
            cout << "YES" << endl;
            for (int i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
        }
        else {cout<<"NO";}
        cout << endl;
    }
    return 0;
}