#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        multiset<long long> s;
        long long x;
        int z, y;
        cin >> x >> y;
        for (int i = 0; i < z; i++)
        {
            cin >> x;
            s.insert(x);
        }

        for (int i = 0; i < y; i++)
        {
            long long y;
            cin >> y;

            int key = y;

            if (s.find(key) != s.end())
            {
                std::cout << "Element is present in the set" << std::endl;
            }
            else
            {
                std::cout << "Element not found" << std::endl;
            }
            s.insert(y);
        }
    }
        return 0;
}