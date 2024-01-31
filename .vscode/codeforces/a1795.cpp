#include <bits/stdc++.h>
using namespace std;
void reverseStr(string &str)
{
    int n = str.length();

    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        string n, m;
        cin >> n >> m;
        int bo = 1;
        reverseStr(m);
        string c = n + m;
        int ct = 0;
        // cout << c << endl;
    
        for (int i = 0; i < c.size(); i++)
        {
            if (c[i] == c[i + 1])
            {
                ct++;
            }
        }
        
        if (ct>1)
        {
       bo= 0;
        }
        if (bo==1)
        {
        cout<<"YES"<<endl;
        }
        
        else 
        cout<<"NO"<<endl;
    }
    return 0;
}