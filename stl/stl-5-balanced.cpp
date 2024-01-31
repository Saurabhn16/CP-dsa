#include <bits/stdc++.h>
using namespace std;
string isBalanced(string s)
{
    stack<char> st;
    for (char bracket : s)
    {
        if (symbols[bracket] < 0)
        {
            st.push(bracket);
        }
        else
        {
            if (st.empty())
            {
                return "NO";
            }
            char top = st.top();
            st.pop();
            if (symbols[top] + symbols[bracket] != 0)
            {
                return "NO";
            }
        }
    }
    if (st.empty())
    {
        return "YES";
    }
    else
    {
        return "No";
    }
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        getline(cin, s);
        string result = isBalanced(s);
        cout << result << "\n";
    }

    return 0;
}
+