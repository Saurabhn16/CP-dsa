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
            else
                return false;
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
bool reverseS(string s, map<int, int> &mp)
{
    stack<char> t;
    string b = "{}";
    string e = "[]";
    string d = "()";
    for (int i = 0; i < s.size(); i++)
    {
        char c = s[i];

        if (((c == b[0]) || (c == d[0]) || (c == e[0])))
        {
            // cout << c << " ";
            mp[i] = 1;
            t.push(c);
        }

        else
        {
            if (!t.empty())
            {

                if ((c == b[1] && t.top() == b[0]) || (c == d[1] && t.top() == d[0]) || (c == e[1] && t.top() == e[0]))
                {
                    mp[i] = 1;
                    t.pop();
                }

                else
                {
                    mp[i] = 2;
                    t.push(d[0]);
                    return false;

                }
            }
            else
            {
                mp[i] = 2;
                 t.push(d[0]);
                return false;
            }
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
        int n;
        cin >> n;
        string s;
        cin >> s;
        if (n % 2 != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            if (isValidParenthesis(s))
            {
                cout << 1 << endl;
                for (int i = 0; i < n; i++)
                {
                    cout << "1 ";
                }
                cout << endl;
            }
            else
            {
                map<int, int> mp;
                reverseS(s, mp);

                cout << 2 << endl;

                for (auto i : mp)
                {

                    cout << i.first << " ";
                }
                cout << endl;
                for (auto i : mp)
                {

                    cout << i.second << " ";
                }
                cout << endl;
            }
        }
    }
    return 0;
}