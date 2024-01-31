#include <bits/stdc++.h>
using namespace std;
bool isValidParenthesis(string s)
{
    stack<char> t;
    string b = "{}";
    string e = "[]";
    string d = "()";
    // / check(string s, int z);
    for (int i = 0; i < s.size(); i++)
    {
        char c = s[i];

        if (((c == b[0]) || (c == d[0]) || (c == e[0])))
        {
            // cout << c << " ";
            t.push(c);
        }

        else
        {
            if (!t.empty())
            {
            
                if ((c == b[1] && t.top() == b[0]) || (c == d[1] && t.top() == d[0]) || (c == e[1] && t.top() == e[0]))
                {
                    t.pop();
                }

                else
                {
                    return false;
                }
            }
            else return false ;
        }
    }
    if (t.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (isValidParenthesis(s))
        {
            cout << "True" << endl;
        }
        else
        {
            cout << "False" << endl;
        }
    }
    return 0;
}