#include <bits/stdc++.h>
using namespace std;
void qes(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return ;
    }

    char ch = s[0];
    string ros = s.substr(1);
    qes(ros, ans);
    qes(ros, ans + ch);
}

int main()
{
   
    qes("abc","");
    return 0;
}