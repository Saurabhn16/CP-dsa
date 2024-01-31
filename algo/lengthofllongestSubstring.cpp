class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int len = 0;

        int mx = 0;

        unordered_map<char, int> mp;

        for (int i = 0; i < s.size(); i++)
        {
            if (mp.find(s[i]) != mp.end())
            {
                len = max(len, mp[s[i]] + 1);
            }
            mx = max(len++, mx);
            mp[s[i]] = i;
        }
    }
    return mx;

}
;