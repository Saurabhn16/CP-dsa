class Solution
{
public:
    string removeStars(string s)
    {
        stack<char> st;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '*')
            {
                if (!st.empty())
                {
                    st.pop();
                }
                else
                {
                    i++;
                }
            }
            else
            {
                st.push(s[i]);
            }
        }
        string k = "";
        while (!st.empty())
        {
            char a = st.top();
            k.push_back(a);
            st.pop();
        }
        reverse(k.begin(),k.end());
        return k;
    }
};