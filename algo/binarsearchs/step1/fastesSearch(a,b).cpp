#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    int k;
    cin >> k;

    for (int i = 0; i < k; ++i)
    {
        int l, r;
        cin >> l >> r;

        auto lowerIter = lower_bound(arr.begin(), arr.end(), l);
        auto upperIter = upper_bound(arr.begin(), arr.end(), r);

        int count = upperIter - lowerIter;
        cout << count << " ";
    }

    return 0;
}