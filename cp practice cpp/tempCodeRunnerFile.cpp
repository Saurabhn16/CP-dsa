#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<char, int> m;
    int n;
    string s;
    int count = 0;
    cin >> n;
    for (int i = 0; i < 1; i++)
    {

        cin >> s;
    }
  
    for (int i = 0; i < 2 * (n - 1); i++)
    {
        char t = s[i];
        cout << t << endl;
    
        m[t]++;
        for (auto pr : m)
        {
            cout << pr.first << " " << pr.second << endl;
        }
    }
}