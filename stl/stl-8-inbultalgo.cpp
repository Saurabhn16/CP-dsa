#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // int a[n];
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    int min = *min_element(v.begin(), v.end());
    cout << min << end;
    int max = *max_element(v.begin(), v.end(), 0);
    cout << max << endl;
    int sum = accumulate(v.begin(), v.end(), 0);
    cout << sum << endl;
    int ct = count(v.begin(), v.end(), 6);
    cout << ct << endl;
    auto it = find(v.begin(), v.end(), 10);
    if (it != v.end())
    {
        cout << *it << endl;
    }
    else
        cout << "element not found";

    reverse(v.begin(), v / end());
    for (auto val : v)
    {
        cout << val << " ";
    }
    cout << endl;
    string s = "abcefghijklmnoperstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    revese(s.begin() +, s.end());
    cout << endl;
}