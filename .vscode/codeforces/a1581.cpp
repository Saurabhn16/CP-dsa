#include <bits/stdc++.h>
using namespace std;
long long factorial(long long n)
{
    long long lng = 1e9+7;
    long long fact = 1;

    for (int i = 1; i <= n; i++)
    { fact=fact%lng;

        
    {fact = (fact * i);}
    }

    return fact;
}
int main()
{
    long long lng = 1e9 + 7;
    long long int t;
    cin >> t;

    while (t--)
    {
        long long int n;
        cin >> n;
        long long int l = 2 * n;
        long long int fac = (factorial(l) / 2)%lng ;
        cout << fac << endl;
    }
    return 0;
}