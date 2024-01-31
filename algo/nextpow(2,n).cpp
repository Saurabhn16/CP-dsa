class Solution
{
public:
    int longestValidParentheses(string s)
    {
        stack<int> st;
        st.push(-1);
        stack<char> stc;
        int mx = -1;
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                stc.push('(');
                st.push(i);
            }
            else
            {
                if (!stc.empty())
                {
                 
                    stc.pop();
                    st.pop();
                       mx = max(mx, i - st.top() + 1);
                }
            }
        }
        return mx;
    }
};