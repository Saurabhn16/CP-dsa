#include <bits/stdc++.h>
using namespace std;
#define int long long


void towerOfHanoi(int n, char src, char dest, char help)
{
    if (n == 0)
    {
        // i++;
        return;
    }
    towerOfHanoi(n - 1, src, help, dest);
    cout << "Move form:-  " << src << " to:- " << dest << endl;
    towerOfHanoi(n - 1, help, dest, src);
}
signed main()
{
    long long t;
    cin >> t;
    while (t--)
    { cout<<endl;
    
        long long n;
        cin >> n;
        towerOfHanoi(n, 'a', 'b', 'c');
     
    }
    return 0;
}