#include <bits/stdc++.h>
using namespace std;
#define int long long
bool isVowel(char ch)
{
    return ch == 'a' || ch == 'o' || ch == 'i' || ch == 'u' || ch == 'e';
}
vector<string> subset(string s)
{
    vector<string> ans;
    int sz = (1 << s.size());
    for (int mask = 0; mask < sz; mask++)
    {
        string subset;
        for (int bits = 0; bits < s.size(); bits++)
        {
            if (mask & (1 << bits))
                subset.push_back(s[bits]);
        }
        if (subset.size())
        {
            ans.push_back(subset);
        }
    }
    return ans;
}
signed main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        // cout << endl;
        int n;
        int ans = 0;
        cin >> n;
        string str[n];
        for (int i = 0; i < n; i++)
        {
            cin >> str[i];
        }

        unordered_map<string, int> hsh;
        for (int i = 0; i < n; i++)
        {
            set<char> distinct_vw;
            for (char ch : str[i])
            {
                if (isVowel(ch))
                {
                    distinct_vw.insert(ch);
                }
            }

            string vowel_str;
            for (char ch : distinct_vw)
            {
                vowel_str.push_back(ch);
            }
            vector<string> all_subsets = subset(vowel_str);
            for (string vowel_subset : all_subsets)
            {
                hsh[vowel_subset]++;
            }
        }
        for (auto pr : hsh)
        {
            if (pr.second < 3)
            {
                continue;
            }

            long long ct = pr.second;
            long long way = ct * (ct - 1) * (ct - 2) / 6;
            if (pr.first.size() % 2 == 0)
            {
                ans -= way;
            }
            else
            {
                ans += way;
            }
        }

        cout << ans << endl;
    }
    return 0;
}