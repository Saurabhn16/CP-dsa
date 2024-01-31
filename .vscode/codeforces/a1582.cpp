// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n = 3;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int k = (a[0] + 2* a[1])+ (3 * a[2]);
 if (k%2==0)
 {
      cout << "0" << endl;
 }
 else
 {
        cout << "1" << endl;
 }
 
    
    }
    return 0;
}