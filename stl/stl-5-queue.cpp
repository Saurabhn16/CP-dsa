#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<string> s;
    s.push("2");
    s.push("3");
    s.push("4");
    s.push("5");
    while (!s.empty())
    {
        cout << s.front() << endl;
        s.pop();
    }

    return 0;
}
