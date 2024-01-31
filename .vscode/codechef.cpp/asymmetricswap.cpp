#include <bits/stdc++.h>
using namespace std;
int binomialCoeff(int n, int k)
{
   
    if (k > n)
        return 0;
    if (k == 0 || k == n)
        return 1;
 
    // Recur
    return binomialCoeff(n - 1, k - 1)
           + binomialCoeff(n - 1, k);
}
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        long long lng = 1e9 + 7;
        long long sm = 0;
        long long dif = 0;

        for (long long i = 0; i < n; i++)
        {
            if (a[i] == b[i])
            {
                sm++;
            }
            if (a[i] != b[i])

            {
                dif++;
            }
        }
 if (sm%2==0)
 {
    /* code */
 }
 
       cout<< binomialCoeff(n,sm)<<endl;
    }
}