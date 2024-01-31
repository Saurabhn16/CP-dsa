#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        vector<char> f;
        char min = 'z';
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] < min)
            {
                min = s[i];
            }
        } int ct=0;
         for (int  i = 0; i < s.size(); i++)
         { int t=min;
         int k=s[i];
             if (t==k &&ct==0)
             {
                 ct++;
             }
             else {f.push_back(s[i]);}
             
         }
         
        cout << min<<" ";
        for (int  i = 0; i < f.size(); i++)
        {
            cout<<f[i];
        }
        cout<<endl;
    }
    return 0;
}
