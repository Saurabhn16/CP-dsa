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
        long long count = 0;

        long long i = 2;
        while (n % i != 0)
        {
            i++;
        }
        // cout << i << " ";
        count = count + 1;
        if ((m - (n + i)) % 2 == 0)
        {

            count += (m - (n + i)) / 2;
        }
        else
        {
            count += (m - (n + i) + 1) / 2;
        }
        cout
            << count << endl;
    }
    return 0;
}