#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> v)
{
    cout << " size :" << v.size() << endl;
    for (long long i = 0; i < v.size(); ++i)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
void remove(std::vector<int> &v)
{
    auto end = v.end();
    for (auto it = v.begin(); it != end; ++it)
    {
        end = std::remove(it + 1, end, *it);
    }

    v.erase(end, v.end());
}
long long gcd(long long int a, long long int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
long long lcm(long long a, long long b)
{
    return (a / gcd(a, b)) * b;
}

int main()
{
    long long a, b, c;
    cin >> a >> b >> c;
    long long d = 2 * c;
    vector<int> z;
    for (long long i = 0; i < c; i++)
    {
        long long x = a * i;
        z.push_back(x);
    }
    for (long long i = 0; i < c; i++)
    {
        long long x = b * i;
        z.push_back(x);
    }

    sort(z.begin(), z.end());
    remove(z);

    long long t = lcm(a, b);

    if (z[c] % t == 0)
    {
        for (int i = c; i >= 0; i--)
        {
            if (z[i] % t == 0)
            {
                cout << z[i] << " ";
            }
        }
    }
    else if (z[c] % a == 0)
    {
        for (int i = c; i >= 0; i--)
        {
            if (z[i] % a == 0)
            {
                cout << z[i] << " ";
            }
        }
    }
    else if (z[c] % b == 0)
    {
        for (int i = c; i >= 0; i--)
        {
            if (z[i] % b == 0)
            {
                cout << z[i] << " ";
            }
        }
    }

    return 0;
}
