#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, m;
        cin >> n >> m;
 if (2*n>m)
 {
 cout<<m%n<<endl;

 }
 else
 {
    cout<<(m-1)%m/2<<endl;
 }
 
 
    }
    return 0;
}