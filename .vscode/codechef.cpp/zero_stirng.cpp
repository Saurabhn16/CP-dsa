#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        int lng;
        cin >> lng;
        string n;
        cin >> n;

        int a = 0;
        int b = 0;
        for (int i = 0; i < lng; i++)
        {
            if (n[i] == '1')
            {
                b++;
            }
            if (n[i] == '0')
            {
                a++;
            }
        }
        // cout << a << b;
        int mx= max(a, b);
        int mn=min(a,b);
        // cout << endl;
        if (b == 0)

        { 
        
            cout << 0 << endl;
        }
        else
        { 
            if (mn==1)
        {
            
        }cout<<+1<<endl;
        }
    }
    return 0;
}