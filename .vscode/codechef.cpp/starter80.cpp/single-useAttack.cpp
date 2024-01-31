#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, m, o;
        cin >> n >> m >> o;
        int sum = 0;
        if (n >= o)
        {
            n = n - o;
            sum =sum+  1;
        }
        while (n>0)
        {
                 n = n - m;
            sum =sum+  1;
        }
        

        sum+=n/m;  
        cout<<sum<<endl;;  }
    return 0;
}