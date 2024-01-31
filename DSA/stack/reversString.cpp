#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    string ans = " ";
    stack<char> s;
    for (int i = 0; i < str.size(); i++)
    {
        char ch = str[i];
        s.push(ch);
    }
    for (int i = 0; i < str.size(); i++)
    {
        char ch = s.top();
        ans.push_back(ch);
        s.pop();
    }
    cout << ans;

    return 0;
}
