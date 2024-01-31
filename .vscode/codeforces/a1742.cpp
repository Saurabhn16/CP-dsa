#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        
      
        int d, b, c;

      cin>>d>>b>>c;
        if ((b + c == d) || (d + c == b) || (b + d == c))
        {
            cout << "YES";
        }

        else
        {
            cout << "NO";
        }

        cout << endl;
    }
    return 0;
}