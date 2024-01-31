#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string a = "";
        string b = "";
        int n = 0;
        int l = s.size();
        for (int i = 0; i < l; i++)
        {
            if (s[i] == '+')
            {
                n++;
            }

             else if (s[i] == '+' || n == 0)
            {
                a = a + s[i];
            }
            else
            {
                b = b + s[i];
            }
        }

        cout << stoi(a)+stoi( b) << endl;
    }
}