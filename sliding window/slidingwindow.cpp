class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        int hsh1[1000];
        int hsh2[1000];

        int pl = p.size();
        int sl = s.size();
        for (long long int i = 0; i < pl; i++)
        {
            hsh1[p[i]]++;
        }
        for (long long int i = 0; i < sl; i++)
        {
            hsh2[s[i]]++;
        }
        int count = 0;
        for (char i = 'a'; i <= 'z'; i++)
        {

            if (hsh2[i] != hsh1[i])
            {
                count = 1;
            }

            hsh1[i] = 0;
            hsh2[i] = 0;
        }
        if (count == 1)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};