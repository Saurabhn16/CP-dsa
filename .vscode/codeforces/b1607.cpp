#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long x, n;
        cin >> x >> n;
        long long xi =abs(x);

        if (n==0)
        {
     cout<<x;
        }
    
    else{    if (xi % 2 == 0)
        {
            //  cout<<xi<<" ";
         
         
            if (n % 4 == 0)
            {
                cout << x+0;
            }
            if (n % 4 == 1)
            {
                cout <<x -n;
            }
            if (n % 4 == 2)
            {
                cout << x+1;
            }
            if (n % 4 == 3)
            { 
                cout << x+n + 1;
            }
        }

        else
        {
            

            if (n % 4 == 0)
            {
                cout << x+0;
            }
            if (n % 4 == 1)
            {
            cout <<x+ n;
            }
            if (n % 4 == 2)
            {
                cout << x-1;
            }
            if (n % 4 == 3)
             {  cout <<x -n-1;}
        }}
        cout << endl;
    }
    return 0;
}