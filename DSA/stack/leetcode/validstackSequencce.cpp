class Solution
{
public:
    bool validateStackSequences(vector<int> &a, vector<int> &b)
    {
        int n = a.size();
        int i = 0;
        int j = 0;
        stack<int> st;

        for (int num : a)
        {
            st.push(num);

            while (!st.empty() && st.top() == b[j])
            {
                st.pop();
                j++;
            }
        }

        return st.empty();
    }
};