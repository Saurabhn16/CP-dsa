
#include <bits/stdc++.h>
using namespace std;

void arrange(string s, string t)
{
    int cc = 0;
    int co = 0;
    // Storing the count of 1's in the string
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
            cc++;
        else
        {
            co++;
        }
    }
    for (int i = 0; i < cc; i++)
    {
        s[i] = '0';
    }
    for (int i = cc; i < co + cc; i++)

    {
        s[i] = '0';
    }
    for (int i = 0; i < s.length(); i++)
    {
        cout << s[i];
    }
  
  
  
    int ct = 0;
    int cy = 0;
    // Storing the count of 1's in the string
    for (int i = 0; i < t.length(); i++)
    {
        if (t[i] == '1')
            ct++;
        else
        {
            cy++;
        }
    }    for (int i = 0; i < t.length(); i++)
    {  if (s[i]!=t[i])
    {
       
    }
    
        t[i] = '1';
    }
    for (int i = 0; i < s.length(); i++)
    {
        cout << t[i];
    }
  

    cout << endl;
}
string xoring(string a, string b, int n)
{
    string ans = "";

    for (int i = 0; i < n; i++)
    {

        if (a[i] == b[i])
            ans += "0";
        else
            ans += "1";
    }
    return ans;
}


// Driver Code
int main()
{
    string a, b, c, d, e;
    cin >> a >> b;
    if (a > b)
    {
        c = a;
        d = b;
    }
    else
    {
        c = b;
        d = a;
    }

    int n = a.length();
    arrange(c, d);
    e = xoring(c, d, n);
    cout << e;
    return 0;
}