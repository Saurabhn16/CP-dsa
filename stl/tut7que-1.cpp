class Solution
{
public:
    string removeChars(string string1, string string2)
    {
        string a;
        for (int i = 0; i <= string2.size() - 1; i++)
        {
            int flag = 0;
            for (int j = 0; i <= string1.size() - 1; j++)
            {
                if (string1[i] == string2[i])
                {
                    flag = 1;
                }
            }
            if (flag != 1)
            {
                a = pushback(string1[i]);
            }
            return a;
        }
    }
};
