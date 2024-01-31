#include <bits/stdc++.h>
using namespace std;
int mostFrequent(int arr[], int n)
{
    // Insert all elements in hash.
    unordered_map<int, int> hash;
    for (int i = 0; i < n; i++)
        hash[arr[i]]++;

    // find the max frequency
    int max_count = 0, res = -1;
    for (auto i : hash)
    {
        if (max_count < i.second)
        {
            res = i.first;
            max_count = i.second;
        }
    }

    return res;
}
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
         int n;
        cin >> n;
        int  a[n];

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        int k = mostFrequent( a, n);
        int max = 0;
        for (int i = 0; i < n; ++i)
        {
            if (a[i] == k)
            {
                max++;
            }
        }
        cout << n - max  << endl;
        ;
    }
    return 0;
}